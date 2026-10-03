//      // verilator_coverage annotation
        // -------------------------------------------------------------
        //    Copyright 2004-2011 Synopsys, Inc.
        //    Copyright 2010-2011 Mentor Graphics Corporation
        //    Copyright 2010-2011 Cadence Design Systems, Inc.
        //    All Rights Reserved Worldwide
        //
        //    Licensed under the Apache License, Version 2.0 (the
        //    "License"); you may not use this file except in
        //    compliance with the License.  You may obtain a copy of
        //    the License at
        //
        //        http://www.apache.org/licenses/LICENSE-2.0
        //
        //    Unless required by applicable law or agreed to in
        //    writing, software distributed under the License is
        //    distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
        //    CONDITIONS OF ANY KIND, either express or implied.  See
        //    the License for the specific language governing
        //    permissions and limitations under the License.
        // -------------------------------------------------------------
        //
        
%000004 class uvm_reg_map_info;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map_info__Vclpkg
           uvm_reg_addr_t         offset;
           string                 rights;
           bit                    unmapped;
           uvm_reg_addr_t         addr[];
           uvm_reg_frontdoor      frontdoor;
           uvm_reg_map_addr_range mem_range; 
           
           // if set marks the uvm_reg_map_info as initialized, prevents using an uninitialized map (for instance if the model 
           // has not been locked accidently and the maps have not been computed before)
           bit                    is_initialized;
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_reg_map
        //
        // :Address map abstraction class
        //
        // This class represents an address map.
        // An address map is a collection of registers and memories
        // accessible via a specific physical interface.
        // Address maps can be composed into higher-level address maps.
        //
        // Address maps are created using the <uvm_reg_block::create_map()>
        // method.
        //------------------------------------------------------------------------------
        
        class uvm_reg_map extends uvm_object;
        
~000350    `uvm_object_utils(uvm_reg_map)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000350  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           
           // info that is valid only if top-level map
           local uvm_reg_addr_t     m_base_addr;
           local int unsigned       m_n_bytes;
           local uvm_endianness_e   m_endian;
           local bit                m_byte_addressing;
           local uvm_object_wrapper m_sequence_wrapper;
           local uvm_reg_adapter    m_adapter;
           local uvm_sequencer_base m_sequencer;
           local bit                m_auto_predict;
           local bit                m_check_on_read;
        
           local uvm_reg_block      m_parent;
        
           local int unsigned       m_system_n_bytes;
        
           local uvm_reg_map        m_parent_map;
           local uvm_reg_addr_t     m_parent_maps[uvm_reg_map];   // value=offset of this map at parent level
           local uvm_reg_addr_t     m_submaps[uvm_reg_map];       // value=offset of submap at this level
           local string             m_submap_rights[uvm_reg_map]; // value=rights of submap at this level
        
           local uvm_reg_map_info   m_regs_info[uvm_reg];
           local uvm_reg_map_info   m_mems_info[uvm_mem];
        
           local uvm_reg            m_regs_by_offset[uvm_reg_addr_t];
                                    // Use only in addition to above if a RO and a WO
                                    // register share the same address.
           local uvm_reg            m_regs_by_offset_wo[uvm_reg_addr_t]; 
           local uvm_mem            m_mems_by_offset[uvm_reg_map_addr_range];
        
           extern /*local*/ function void Xinit_address_mapX();
        
           static local uvm_reg_map   m_backdoor;
        
           // Function: backdoor
           // Return the backdoor pseudo-map singleton
           //
           // This pseudo-map is used to specify or configure the backdoor
           // instead of a real address map.
           //
 001158    static function uvm_reg_map backdoor();
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
~001157       if (m_backdoor == null)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+001157  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001         m_backdoor = new("Backdoor");
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
 001158       return m_backdoor;
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           endfunction
        
        
           //----------------------
           // Group: Initialization
           //----------------------
        
        
           // Function: new
           //
           // Create a new instance
           //
           extern function new(string name="uvm_reg_map");
        
        
           // Function: configure
           //
           // Instance-specific configuration
           //
           // Configures this map with the following properties.
           //
           // parent    - the block in which this map is created and applied
           //
           // base_addr - the base address for this map. All registers, memories,
           //             and sub-blocks will be at offsets to this address
           //
           // n_bytes   - the byte-width of the bus on which this map is used 
           //
           // endian    - the endian format. See <uvm_endianness_e> for possible
           //             values
           //
           // byte_addressing - specifies whether the address increment is on a
           //             per-byte basis. For example, consecutive memory locations
           //             with ~n_bytes~=4 (32-bit bus) are 4 apart: 0, 4, 8, and
           //             so on. Default is TRUE.
           //
           extern function void configure(uvm_reg_block     parent,
                                          uvm_reg_addr_t    base_addr,
                                          int unsigned      n_bytes,
                                          uvm_endianness_e  endian,
                                          bit byte_addressing = 1);
        
           // Function: add_reg
           //
           // Add a register
           //
           // Add the specified register instance ~rg~ to this address map.
           //
           // The register is located at the specified address ~offset~ from
           // this maps configured base address.
           //
           // The ~rights~ specify the register's accessibility via this map.
           // Valid values are "RW", "RO", and "WO". Whether a register field
           // can be read or written depends on both the field's configured access
           // policy (see <uvm_reg_field::configure> and the register's rights in
           // the map being used to access the field. 
           //
           // The number of consecutive physical addresses occupied by the register
           // depends on the width of the register and the number of bytes in the
           // physical interface corresponding to this address map.
           //
           // If ~unmapped~ is TRUE, the register does not occupy any
           // physical addresses and the base address is ignored.
           // Unmapped registers require a user-defined ~frontdoor~ to be specified.
           //
           // A register may be added to multiple address maps
           // if it is accessible from multiple physical interfaces.
           // A register may only be added to an address map whose parent block
           // is the same as the register's parent block.
           //
           extern virtual function void add_reg (uvm_reg           rg,
                                                 uvm_reg_addr_t    offset,
                                                 string            rights = "RW",
                                                 bit               unmapped=0,
                                                 uvm_reg_frontdoor frontdoor=null);
        
        
           // Function: add_mem
           //
           // Add a memory
           //
           // Add the specified memory instance to this address map.
           // The memory is located at the specified base address and has the
           // specified access rights ("RW", "RO" or "WO").
           // The number of consecutive physical addresses occupied by the memory
           // depends on the width and size of the memory and the number of bytes in the
           // physical interface corresponding to this address map.
           //
           // If ~unmapped~ is TRUE, the memory does not occupy any
           // physical addresses and the base address is ignored.
           // Unmapped memorys require a user-defined ~frontdoor~ to be specified.
           //
           // A memory may be added to multiple address maps
           // if it is accessible from multiple physical interfaces.
           // A memory may only be added to an address map whose parent block
           // is the same as the memory's parent block.
           //
           extern virtual function void add_mem (uvm_mem        mem,
                                                 uvm_reg_addr_t offset,
                                                 string         rights = "RW",
                                                 bit            unmapped=0,
                                                 uvm_reg_frontdoor frontdoor=null);
        
           
           // Function: add_submap
           //
           // Add an address map
           //
           // Add the specified address map instance to this address map.
           // The address map is located at the specified base address.
           // The number of consecutive physical addresses occupied by the submap
           // depends on the number of bytes in the physical interface
           // that corresponds to the submap,
           // the number of addresses used in the submap and
           // the number of bytes in the
           // physical interface corresponding to this address map.
           //
           // An address map may be added to multiple address maps
           // if it is accessible from multiple physical interfaces.
           // An address map may only be added to an address map
           // in the grand-parent block of the address submap.
           //
           extern virtual function void add_submap (uvm_reg_map    child_map,
                                                    uvm_reg_addr_t offset);
        
        
           // Function: set_sequencer
           //
           // Set the sequencer and adapter associated with this map. This method
           // ~must~ be called before starting any sequences based on uvm_reg_sequence.
        
           extern virtual function void set_sequencer (uvm_sequencer_base sequencer,
                                                       uvm_reg_adapter    adapter=null);
        
        
        
           // Function: set_submap_offset
           //
           // Set the offset of the given ~submap~ to ~offset~.
        
           extern virtual function void set_submap_offset (uvm_reg_map submap,
                                                           uvm_reg_addr_t offset);
        
        
           // Function: get_submap_offset
           //
           // Return the offset of the given ~submap~.
        
           extern virtual function uvm_reg_addr_t get_submap_offset (uvm_reg_map submap);
        
        
           // Function: set_base_addr
           //
           // Set the base address of this map.
        
           extern virtual function void   set_base_addr (uvm_reg_addr_t  offset);
        
        
           // Function: reset
           //
           // Reset the mirror for all registers in this address map.
           //
           // Sets the mirror value of all registers in this address map
           // and all of its submaps
           // to the reset value corresponding to the specified reset event.
           // See <uvm_reg_field::reset()> for more details.
           // Does not actually set the value of the registers in the design,
           // only the values mirrored in their corresponding mirror.
           //
           // Note that, unlike the other reset() method, the default
           // reset event for this method is "SOFT".
           //
           extern virtual function void reset(string kind = "SOFT");
        
        
           /*local*/ extern virtual function void add_parent_map(uvm_reg_map  parent_map,
                                                                 uvm_reg_addr_t offset);
        
           /*local*/ extern virtual function void Xverify_map_configX();
        
           /*local*/ extern virtual function void m_set_reg_offset(uvm_reg   rg,
                                                                   uvm_reg_addr_t offset,
                                                                   bit unmapped);
        
           /*local*/ extern virtual function void m_set_mem_offset(uvm_mem mem,
                                                                   uvm_reg_addr_t offset,
                                                                   bit unmapped);
        
        
           //---------------------
           // Group: Introspection
           //---------------------
        
           // Function: get_name
           //
           // Get the simple name
           //
           // Return the simple object name of this address map.
           //
        
           // Function: get_full_name
           //
           // Get the hierarchical name
           //
           // Return the hierarchal name of this address map.
           // The base of the hierarchical name is the root block.
           //
           extern virtual function string get_full_name();
        
        
           // Function: get_root_map
           //
           // Get the externally-visible address map
           //
           // Get the top-most address map where this address map is instantiated.
           // It corresponds to the externally-visible address map that can
           // be accessed by the verification environment.
           //
           extern virtual function uvm_reg_map get_root_map();
        
        
           // Function: get_parent
           //
           // Get the parent block
           //
           // Return the block that is the parent of this address map.
           //
           extern virtual function uvm_reg_block get_parent();
        
        
           // Function: get_parent_map
           // Get the higher-level address map
           //
           // Return the address map in which this address map is mapped.
           // returns ~null~ if this is a top-level address map.
           //
           extern virtual function uvm_reg_map           get_parent_map();
        
        
           // Function: get_base_addr
           //
           // Get the base offset address for this map. If this map is the
           // root map, the base address is that set with the ~base_addr~ argument
           // to <uvm_reg_block::create_map()>. If this map is a submap of a higher-level map,
           // the base address is offset given this submap by the parent map.
           // See <set_submap_offset>.
           //
           extern virtual function uvm_reg_addr_t get_base_addr (uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_n_bytes
           //
           // Get the width in bytes of the bus associated with this map. If ~hier~
           // is ~UVM_HIER~, then gets the effective bus width relative to the system
           // level. The effective bus width is the narrowest bus width from this
           // map to the top-level root map. Each bus access will be limited to this
           // bus width.
           //
           extern virtual function int unsigned get_n_bytes (uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_addr_unit_bytes
           //
           // Get the number of bytes in the smallest addressable unit in the map.
           // Returns 1 if the address map was configured using byte-level addressing.
           // Returns <get_n_bytes()> otherwise.
           //
           extern virtual function int unsigned get_addr_unit_bytes();
        
        
           // Function: get_base_addr
           //
           // Gets the endianness of the bus associated with this map. If ~hier~ is
           // set to ~UVM_HIER~, gets the system-level endianness.
           //
           extern virtual function uvm_endianness_e get_endian (uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_sequencer
           //
           // Gets the sequencer for the bus associated with this map. If ~hier~ is
           // set to ~UVM_HIER~, gets the sequencer for the bus at the system-level.
           // See <set_sequencer>.
           //
           extern virtual function uvm_sequencer_base get_sequencer (uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_adapter
           //
           // Gets the bus adapter for the bus associated with this map. If ~hier~ is
           // set to ~UVM_HIER~, gets the adapter for the bus used at the system-level.
           // See <set_sequencer>.
           //
           extern virtual function uvm_reg_adapter get_adapter (uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_submaps
           //
           // Get the address sub-maps
           //
           // Get the address maps instantiated in this address map.
           // If ~hier~ is ~UVM_HIER~, recursively includes the address maps,
           // in the sub-maps.
           //
           extern virtual function void  get_submaps (ref uvm_reg_map maps[$],
                                                      input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_registers
           //
           // Get the registers
           //
           // Get the registers instantiated in this address map.
           // If ~hier~ is ~UVM_HIER~, recursively includes the registers
           // in the sub-maps.
           //
           extern virtual function void  get_registers (ref uvm_reg regs[$],
                                                        input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_fields
           //
           // Get the fields
           //
           // Get the fields in the registers instantiated in this address map.
           // If ~hier~ is ~UVM_HIER~, recursively includes the fields of the registers
           // in the sub-maps.
           //
           extern virtual function void  get_fields (ref uvm_reg_field fields[$],
                                                     input uvm_hier_e hier=UVM_HIER);
        
           
           // Function get_memories
           //
           // Get the memories
           //
           // Get the memories instantiated in this address map.
           // If ~hier~ is ~UVM_HIER~, recursively includes the memories
           // in the sub-maps.
           //
           extern virtual function void  get_memories (ref uvm_mem mems[$],
                                                       input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_virtual_registers
           //
           // Get the virtual registers
           //
           // Get the virtual registers instantiated in this address map.
           // If ~hier~ is ~UVM_HIER~, recursively includes the virtual registers
           // in the sub-maps.
           //
           extern virtual function void  get_virtual_registers (ref uvm_vreg regs[$],
                                                                input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_virtual_fields
           //
           // Get the virtual fields
           //
           // Get the virtual fields from the virtual registers instantiated
           // in this address map.
           // If ~hier~ is ~UVM_HIER~, recursively includes the virtual fields
           // in the virtual registers in the sub-maps.
           //
           extern virtual function void  get_virtual_fields (ref uvm_vreg_field fields[$],
                                                             input uvm_hier_e hier=UVM_HIER);
        
        
           extern virtual function uvm_reg_map_info get_reg_map_info(uvm_reg rg,  bit error=1);
           extern virtual function uvm_reg_map_info get_mem_map_info(uvm_mem mem, bit error=1);
           extern virtual function int unsigned get_size();
        
        
           // Function: get_physical_addresses
           //
           // Translate a local address into external addresses
           //
           // Identify the sequence of addresses that must be accessed physically
           // to access the specified number of bytes at the specified address
           // within this address map.
           // Returns the number of bytes of valid data in each access.
           //
           // Returns in ~addr~ a list of address in little endian order,
           // with the granularity of the top-level address map.
           //
           // A register is specified using a base address with ~mem_offset~ as 0.
           // A location within a memory is specified using the base address
           // of the memory and the index of the location within that memory.
           //
        
           extern virtual function int get_physical_addresses(uvm_reg_addr_t        base_addr,
                                                              uvm_reg_addr_t        mem_offset,
                                                              int unsigned          n_bytes,
                                                              ref uvm_reg_addr_t    addr[]);
           
        
           // Function: get_reg_by_offset
           //
           // Get register mapped at offset
           //
           // Identify the register located at the specified offset within
           // this address map for the specified type of access.
           // Returns ~null~ if no such register is found.
           //
           // The model must be locked using <uvm_reg_block::lock_model()>
           // to enable this functionality.
           //
           extern virtual function uvm_reg get_reg_by_offset(uvm_reg_addr_t offset,
                                                             bit            read = 1);
        
           //
           // Function: get_mem_by_offset
           // Get memory mapped at offset
           //
           // Identify the memory located at the specified offset within
           // this address map. The offset may refer to any memory location
           // in that memory.
           // Returns ~null~ if no such memory is found.
           //
           // The model must be locked using <uvm_reg_block::lock_model()>
           // to enable this functionality.
           //
           extern virtual function uvm_mem    get_mem_by_offset(uvm_reg_addr_t offset);
        
        
           //------------------
           // Group: Bus Access
           //------------------
        
           // Function: set_auto_predict 
           //
           // Sets the auto-predict mode for his map.
           //
           // When ~on~ is ~TRUE~, 
           // the register model will automatically update its mirror
           // (what it thinks should be in the DUT) immediately after
           // any bus read or write operation via this map. Before a <uvm_reg::write>
           // or <uvm_reg::read> operation returns, the register's <uvm_reg::predict>
           // method is called to update the mirrored value in the register.
           //
           // When ~on~ is ~FALSE~, bus reads and writes via this map do not
           // automatically update the mirror. For real-time updates to the mirror
           // in this mode, you connect a <uvm_reg_predictor> instance to the bus
           // monitor. The predictor takes observed bus transactions from the
           // bus monitor, looks up the associated <uvm_reg> register given
           // the address, then calls that register's <uvm_reg::predict> method.
           // While more complex, this mode will capture all register read/write
           // activity, including that not directly descendant from calls to
           // <uvm_reg::write> and <uvm_reg::read>.
           //
           // By default, auto-prediction is turned off.
           // 
%000001    function void set_auto_predict(bit on=1); m_auto_predict = on; endfunction
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        
           // Function: get_auto_predict
           //
           // Gets the auto-predict mode setting for this map.
           // 
 000175    function bit  get_auto_predict(); return m_auto_predict; endfunction
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        
           // Function: set_check_on_read
           // 
           // Sets the check-on-read mode for his map
           // and all of its submaps.
           //
           // When ~on~ is ~TRUE~, 
           // the register model will automatically check any value read back from
           // a register or field against the current value in its mirror
           // and report any discrepancy.
           // This effectively combines the functionality of the
           // <uvm_reg::read()> and <uvm_reg::mirror(UVM_CHECK)> method.
           // This mode is useful when the register model is used passively.
           //
           // When ~on~ is ~FALSE~, no check is made against the mirrored value.
           //
           // At the end of the read operation, the mirror value is updated based
           // on the value that was read reguardless of this mode setting.
           //
           // By default, auto-prediction is turned off.
           // 
%000000    function void set_check_on_read(bit on=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       m_check_on_read = on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       foreach (m_submaps[submap]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          submap.set_check_on_read(on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
           endfunction
        
        
           // Function: get_check_on_read
           //
           // Gets the check-on-read mode setting for this map.
           // 
 000375    function bit  get_check_on_read(); return m_check_on_read; endfunction
+000375  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        
           
           // Task: do_bus_write
           //
           // Perform a bus write operation.
           //
           extern virtual task do_bus_write (uvm_reg_item rw,
                                             uvm_sequencer_base sequencer,
                                             uvm_reg_adapter adapter);
        
        
           // Task: do_bus_read
           //
           // Perform a bus read operation.
           //
           extern virtual task do_bus_read (uvm_reg_item rw,
                                            uvm_sequencer_base sequencer,
                                            uvm_reg_adapter adapter);
        
        
           // Task: do_write
           //
           // Perform a write operation.
           //
           extern virtual task do_write(uvm_reg_item rw);
        
        
           // Task: do_read
           //
           // Perform a read operation.
           //
           extern virtual task do_read(uvm_reg_item rw);
        
           extern function void Xget_bus_infoX (uvm_reg_item rw,
                                                output uvm_reg_map_info map_info,
                                                output int size,
                                                output int lsb,
                                                output int addr_skip);
        
           extern virtual function string      convert2string();
           extern virtual function uvm_object  clone();
           extern virtual function void        do_print (uvm_printer printer);
           extern virtual function void        do_copy   (uvm_object rhs);
           //extern virtual function bit       do_compare (uvm_object rhs, uvm_comparer comparer);
           //extern virtual function void      do_pack (uvm_packer packer);
           //extern virtual function void      do_unpack (uvm_packer packer);
        
        endclass: uvm_reg_map
           
        
        
        //---------------
        // Initialization
        //---------------
        
        // new
        
%000002 function uvm_reg_map::new(string name = "uvm_reg_map");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000002    super.new((name == "") ? "default_map" : name);
-000002  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000002  point: type=expr comment=((name == %22%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((name == %22%22)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000002    m_auto_predict = 0;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000002    m_check_on_read = 0;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // configure
        
%000001 function void uvm_reg_map::configure(uvm_reg_block    parent,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                             uvm_reg_addr_t   base_addr,
                                             int unsigned     n_bytes,
                                             uvm_endianness_e endian,
                                             bit              byte_addressing=1);
%000001    m_parent     = parent;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001    m_n_bytes    = n_bytes;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001    m_endian     = endian;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001    m_base_addr  = base_addr;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001    m_byte_addressing = byte_addressing;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction: configure
        
        
        // add_reg
        
%000004 function void uvm_reg_map::add_reg(uvm_reg rg, 
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                           uvm_reg_addr_t offset,
                                           string rights = "RW",
                                           bit unmapped=0,
                                           uvm_reg_frontdoor frontdoor=null);
        
%000004    if (m_regs_info.exists(rg)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel", {"Register '",rg.get_name(),
%000000                  "' has already been added to map '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000004    if (rg.get_parent() != get_parent()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel",
                 {"Register '",rg.get_full_name(),"' may not be added to address map '",
%000000           get_full_name(),"' : they are not in the same block"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
           
%000004    rg.add_map(this);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000004    begin
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    uvm_reg_map_info info = new;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    info.offset   = offset;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    info.rights   = rights;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    info.unmapped = unmapped;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    info.frontdoor = frontdoor;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    m_regs_info[rg] = info;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        endfunction
        
        
        // m_set_reg_offset
        
%000000 function void uvm_reg_map::m_set_reg_offset(uvm_reg rg, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                                    uvm_reg_addr_t offset,
                                                    bit unmapped);
        
%000000    if (!m_regs_info.exists(rg)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel",
                 {"Cannot modify offset of register '",rg.get_full_name(),
                 "' in address map '",get_full_name(),
%000000          "' : register not mapped in that address map"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_map_info info    = m_regs_info[rg];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_block    blk     = get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_map      top_map = get_root_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_addr_t   addrs[];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
              // if block is not locked, Xinit_address_mapX will resolve map when block is locked
%000000       if (blk.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
                 // remove any existing cached addresses
%000000          if (!info.unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000            foreach (info.addr[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000               if (!top_map.m_regs_by_offset_wo.exists(info.addr[i])) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                  top_map.m_regs_by_offset.delete(info.addr[i]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                      end
%000000               else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                  if (top_map.m_regs_by_offset[info.addr[i]] == rg) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                     top_map.m_regs_by_offset[info.addr[i]] = 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                       top_map.m_regs_by_offset_wo[info.addr[i]];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                     uvm_reg_read_only_cbs::remove(rg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                     uvm_reg_write_only_cbs::remove(top_map.m_regs_by_offset[info.addr[i]]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                         end
%000000                  else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                     uvm_reg_write_only_cbs::remove(rg);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                     uvm_reg_read_only_cbs::remove(top_map.m_regs_by_offset[info.addr[i]]);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                         end
%000000                  top_map.m_regs_by_offset_wo.delete(info.addr[i]);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                      end
                   end
                 end
        
                 // if we are remapping...
%000000          if (!unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=(unmapped==0) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=(unmapped==1) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             string rg_acc = rg.Xget_fields_accessX(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                    
                    // get new addresses
%000000             void'(get_physical_addresses(offset,0,rg.get_n_bytes(),addrs));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
                    // make sure they do not conflict with others
%000000             foreach (addrs[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                uvm_reg_addr_t addr = addrs[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                if (top_map.m_regs_by_offset.exists(addr)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000                   uvm_reg rg2 = top_map.m_regs_by_offset[addr];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                   string rg2_acc = rg2.Xget_fields_accessX(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
                          // If the register at the same address is RO or WO
                          // and this register is WO or RO, this is OK
%000000                   if (rg_acc == "RO" && rg2_acc == "WO") begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg2_acc == %22WO%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg_acc == %22RO%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg_acc == %22RO%22)==1 && (rg2_acc == %22WO%22)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      top_map.m_regs_by_offset[addr]    = rg;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      uvm_reg_read_only_cbs::add(rg);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      top_map.m_regs_by_offset_wo[addr] = rg2;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      uvm_reg_write_only_cbs::add(rg2);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
                          end
%000000                   else if (rg_acc == "WO" && rg2_acc == "RO") begin
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg2_acc == %22RO%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg_acc == %22WO%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg_acc == %22WO%22)==1 && (rg2_acc == %22RO%22)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      top_map.m_regs_by_offset_wo[addr] = rg;
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      uvm_reg_write_only_cbs::add(rg);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      uvm_reg_read_only_cbs::add(rg2);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                          end
%000000                   else begin
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      string a;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                      a = $sformatf("%0h",addr);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                             `uvm_warning("RegModel", {"In map '",get_full_name(),"' register '",
                                                       rg.get_full_name(), "' maps to same address as register '",
%000000                                                top_map.m_regs_by_offset[addr].get_full_name(),"': 'h",a})
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                          end
                       end
                       else
%000000                   top_map.m_regs_by_offset[addr] = rg;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000                foreach (top_map.m_mems_by_offset[range]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                   if (addrs[i] >= range.min && addrs[i] <= range.max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs.at(i) <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs.at(i) >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs.at(i) >= range[159:96])==1 && (addrs.at(i) <= range[95:32])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                     string a;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                     a = $sformatf("%0h",addrs[i]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                            `uvm_warning("RegModel", {"In map '",get_full_name(),"' register '",
                                rg.get_full_name(), "' overlaps with address range of memory '",
%000000                         top_map.m_mems_by_offset[range].get_full_name(),"': 'h",a})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                          end
                       end
                    end
%000000             info.addr = addrs; // cache it
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                 end
              end
        
%000000       if (unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         info.offset   = -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         info.unmapped = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         info.offset   = offset;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         info.unmapped = 0;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
              
           end
        endfunction
        
        
        // add_mem
        
%000000 function void uvm_reg_map::add_mem(uvm_mem mem,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                           uvm_reg_addr_t offset,
                                           string rights = "RW",
                                           bit unmapped=0,
                                           uvm_reg_frontdoor frontdoor=null);
%000000    if (m_mems_info.exists(mem)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel", {"Memory '",mem.get_name(),
%000000                  "' has already been added to map '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000000    if (mem.get_parent() != get_parent()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel",
                 {"Memory '",mem.get_full_name(),"' may not be added to address map '",
%000000           get_full_name(),"' : they are not in the same block"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
           
%000000    mem.add_map(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_reg_map_info info = new;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    info.offset   = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    info.rights   = rights;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    info.unmapped = unmapped;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    info.frontdoor = frontdoor;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    m_mems_info[mem] = info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        endfunction: add_mem
        
        
        
        // m_set_mem_offset
        
%000000 function void uvm_reg_map::m_set_mem_offset(uvm_mem mem, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                                    uvm_reg_addr_t offset,
                                                    bit unmapped);
        
%000000    if (!m_mems_info.exists(mem)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel",
                 {"Cannot modify offset of memory '",mem.get_full_name(),
                 "' in address map '",get_full_name(),
%000000          "' : memory not mapped in that address map"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_map_info info    = m_mems_info[mem];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_block    blk     = get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_map      top_map = get_root_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_addr_t   addrs[];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
              // if block is not locked, Xinit_address_mapX will resolve map when block is locked
%000000       if (blk.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
                 // remove any existing cached addresses
%000000          if (!info.unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000            foreach (top_map.m_mems_by_offset[range]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000               if (top_map.m_mems_by_offset[range] == mem)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                  top_map.m_mems_by_offset.delete(range);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                   end
                 end
        
                 // if we are remapping...
%000000          if (!unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=(unmapped==0) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=(unmapped==1) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             uvm_reg_addr_t addrs[],addrs_max[];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             uvm_reg_addr_t min, max, min2, max2;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             int unsigned stride;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000             void'(get_physical_addresses(offset,0,mem.get_n_bytes(),addrs));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             min = (addrs[0] < addrs[addrs.size()-1]) ? addrs[0] : addrs[addrs.size()-1];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs.at(32'sh0) < addrs.at((addrs.size() - 32'sh1)))==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs.at(32'sh0) < addrs.at((addrs.size() - 32'sh1)))==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             min2 = addrs[0];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000             void'(get_physical_addresses(offset,(mem.get_size()-1),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                                          mem.get_n_bytes(),addrs_max));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             max = (addrs_max[0] > addrs_max[addrs_max.size()-1]) ?
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs_max.at(32'sh0) > addrs_max.at((addrs_max.size() - 32'sh1)))==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs_max.at(32'sh0) > addrs_max.at((addrs_max.size() - 32'sh1)))==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
                       addrs_max[0] : addrs_max[addrs_max.size()-1];
%000000             max2 = addrs_max[0];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                    // address interval between consecutive mem locations
%000000             stride = (max2 - max)/(mem.get_size()-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
                    // make sure new offset does not conflict with others
%000000             foreach (top_map.m_regs_by_offset[reg_addr]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                if (reg_addr >= min && reg_addr <= max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((reg_addr <= max)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((reg_addr >= min)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((reg_addr >= min)==1 && (reg_addr <= max)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                   string a,b;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                   a = $sformatf("[%0h:%0h]",min,max);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                   b = $sformatf("%0h",reg_addr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                          `uvm_warning("RegModel", {"In map '",get_full_name(),"' memory '",
                              mem.get_full_name(), "' with range ",a,
                              " overlaps with address of existing register '",
%000000                       top_map.m_regs_by_offset[reg_addr].get_full_name(),"': 'h",b})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                       end
                    end
        
%000000             foreach (top_map.m_mems_by_offset[range]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                if (min <= range.max && max >= range.max ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                    min <= range.min && max >= range.min ||
-000000  point: type=expr comment=((max >= range[95:32])==0 && (max >= range[159:96])==0 && (max <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((max >= range[95:32])==0 && (max >= range[159:96])==0 && (min >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((max >= range[95:32])==0 && (min <= range[159:96])==0 && (max <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((max >= range[95:32])==0 && (min <= range[159:96])==0 && (min >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[159:96])==1 && (max >= range[159:96])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==0 && (max >= range[159:96])==0 && (max <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==0 && (max >= range[159:96])==0 && (min >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==0 && (min <= range[159:96])==0 && (max <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==0 && (min <= range[159:96])==0 && (min >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==1 && (max >= range[95:32])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min >= range[159:96])==1 && (max <= range[95:32])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                    min >= range.min && max <= range.max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                  string a,b;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                  a = $sformatf("[%0h:%0h]",min,max);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                  b = $sformatf("[%0h:%0h]",range.min,range.max);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                         `uvm_warning("RegModel", {"In map '",get_full_name(),"' memory '",
                             mem.get_full_name(), "' with range ",a,
                             " overlaps existing memory with range '",
%000000                      top_map.m_mems_by_offset[range].get_full_name(),"': ",b})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                         end
                    end
        
%000000             begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000               uvm_reg_map_addr_range range = '{ min, max, stride };
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000               top_map.m_mems_by_offset[range] = mem;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000               info.addr  = addrs;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000               info.mem_range = range;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                    end
        
                 end
              end
        
%000000       if (unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         info.offset   = -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         info.unmapped = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         info.offset   = offset;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         info.unmapped = 0;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
              
           end
        endfunction
        
        
        // add_submap
        
%000000 function void uvm_reg_map::add_submap (uvm_reg_map child_map,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                               uvm_reg_addr_t offset);
%000000    uvm_reg_map parent_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    if (child_map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       `uvm_error("RegModel", {"Attempting to add NULL map to map '",get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000000    parent_map = child_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
           // Can not have more than one parent (currently)
%000000    if (parent_map != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel", {"Map '", child_map.get_full_name(),
                         "' is already a child of map '",
                         parent_map.get_full_name(),
                         "'. Cannot also be a child of map '",
                         get_full_name(),
%000000                  "'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000000    begin : parent_block_check
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      uvm_reg_block child_blk = child_map.get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      if (child_blk == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                `uvm_error("RegModel", {"Cannot add submap '",child_map.get_full_name(),
%000000                    "' because it does not have a parent block"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
             end
%000000      if (get_parent() != child_blk.get_parent()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                `uvm_error("RegModel",
                  {"Submap '",child_map.get_full_name(),"' may not be added to this ",
                  "address map, '", get_full_name(),"', as the submap's parent block, '",
                  child_blk.get_full_name(),"', is not a child of this map's parent block, '",
%000000           m_parent.get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
             end
           end
           
%000000    begin : n_bytes_match_check
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       if (m_n_bytes > child_map.get_n_bytes(UVM_NO_HIER)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                 `uvm_warning("RegModel",
                     $sformatf("Adding %0d-byte submap '%s' to %0d-byte parent map '%s'",
                               child_map.get_n_bytes(UVM_NO_HIER), child_map.get_full_name(),
%000000                        m_n_bytes, get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
           end
        
%000000    child_map.add_parent_map(this,offset);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    set_submap_offset(child_map, offset);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endfunction: add_submap
        
        
        // reset
        
%000000 function void uvm_reg_map::reset(string kind = "SOFT");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_reg regs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    get_registers(regs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    foreach (regs[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       regs[i].reset(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        endfunction
        
        
        // add_parent_map
        
%000000 function void uvm_reg_map::add_parent_map(uvm_reg_map parent_map, uvm_reg_addr_t offset);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    if (parent_map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel",
%000000           {"Attempting to add NULL parent map to map '",get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000000    if (m_parent_map != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel",
                  $sformatf("Map \"%s\" already a submap of map \"%s\" at offset 'h%h",
                            get_full_name(), m_parent_map.get_full_name(),
%000000                     m_parent_map.get_submap_offset(this)));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000000    m_parent_map = parent_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    m_parent_maps[parent_map] = offset; // prep for multiple parents
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    parent_map.m_submaps[this] = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endfunction: add_parent_map
        
        
        // set_sequencer
        
%000001 function void uvm_reg_map::set_sequencer(uvm_sequencer_base sequencer,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                                 uvm_reg_adapter adapter=null);
        
%000001    if (sequencer == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       `uvm_error("REG_NULL_SQR", "Null reference specified for bus sequencer");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000001    if (adapter == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_info("REG_NO_ADAPT", {"Adapter not specified for map '",get_full_name(),
                "'. Accesses via this map will send abstract 'uvm_reg_item' items to sequencer '",
%000000         sequencer.get_full_name(),"'"},UVM_MEDIUM)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000001    m_sequencer = sequencer;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001    m_adapter = adapter;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        
        //------------
        // get methods
        //------------
        
        // get_parent
        
%000004 function uvm_reg_block uvm_reg_map::get_parent();
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004   return m_parent;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_parent_map
        
%000004 function uvm_reg_map uvm_reg_map::get_parent_map();
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004   return m_parent_map;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_root_map
        
 000526 function uvm_reg_map uvm_reg_map::get_root_map();
+000526  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000526    return (m_parent_map == null) ? this : m_parent_map.get_root_map();
+000526  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction: get_root_map
        
        
        // get_base_addr
        
%000000 function uvm_reg_addr_t  uvm_reg_map::get_base_addr(uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   uvm_reg_map child = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   if (hier == UVM_NO_HIER || m_parent_map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return m_base_addr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   get_base_addr = m_parent_map.get_submap_offset(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   get_base_addr += m_parent_map.get_base_addr(UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_n_bytes
        
~000429 function int unsigned uvm_reg_map::get_n_bytes(uvm_hier_e hier=UVM_HIER);
+000429  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
~000425   if (hier == UVM_NO_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000425  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return m_n_bytes;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
 000429   return m_system_n_bytes;
+000429  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_addr_unit_bytes
        
%000000 function int unsigned uvm_reg_map::get_addr_unit_bytes();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    return (m_byte_addressing) ? 1 : m_n_bytes;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=(m_byte_addressing==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=(m_byte_addressing==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_endian
        
%000000 function uvm_endianness_e uvm_reg_map::get_endian(uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   if (hier == UVM_NO_HIER || m_parent_map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return m_endian;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   return m_parent_map.get_endian(hier);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_sequencer
        
~000175 function uvm_sequencer_base uvm_reg_map::get_sequencer(uvm_hier_e hier=UVM_HIER);
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   if (hier == UVM_NO_HIER || m_parent_map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return m_sequencer;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175   return m_parent_map.get_sequencer(hier);
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_adapter
        
 000175 function uvm_reg_adapter uvm_reg_map::get_adapter(uvm_hier_e hier=UVM_HIER);
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   if (hier == UVM_NO_HIER || m_parent_map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return m_adapter;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175   return m_parent_map.get_adapter(hier);
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_submaps
        
%000000 function void uvm_reg_map::get_submaps(ref uvm_reg_map maps[$], input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    foreach (m_submaps[submap])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      maps.push_back(submap);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
           
%000000    if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      foreach (m_submaps[submap_]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        uvm_reg_map submap=submap_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        submap.get_submaps(maps);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
             end
        endfunction
        
        
        // get_registers
        
%000000 function void uvm_reg_map::get_registers(ref uvm_reg regs[$], input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000   foreach (m_regs_info[rg])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     regs.push_back(rg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000   if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     foreach (m_submaps[submap_]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_map submap=submap_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       submap.get_registers(regs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
            end
        
        endfunction
        
        
        // get_fields
        
%000000 function void uvm_reg_map::get_fields(ref uvm_reg_field fields[$], input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    foreach (m_regs_info[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      rg.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
           
%000000    if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      foreach (this.m_submaps[submap_]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        uvm_reg_map submap=submap_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        submap.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
             end
        
        endfunction
        
        
        // get_memories
        
%000000 function void uvm_reg_map::get_memories(ref uvm_mem mems[$], input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    foreach (m_mems_info[mem])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      mems.push_back(mem);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
            
%000000    if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      foreach (m_submaps[submap_]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        uvm_reg_map submap=submap_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        submap.get_memories(mems);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
             end
        
        endfunction
        
        
        // get_virtual_registers
        
%000000 function void uvm_reg_map::get_virtual_registers(ref uvm_vreg regs[$], input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000   uvm_mem mems[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   get_memories(mems,hier);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000   foreach (mems[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     mems[i].get_virtual_registers(regs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endfunction
        
        
        // get_virtual_fields
        
%000000 function void uvm_reg_map::get_virtual_fields(ref uvm_vreg_field fields[$], input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    uvm_vreg regs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    get_virtual_registers(regs,hier);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    foreach (regs[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        regs[i].get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endfunction
        
        
        
        // get_full_name
        
%000000 function string uvm_reg_map::get_full_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    get_full_name = get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    if (m_parent == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      return get_full_name;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    return {m_parent.get_full_name(), ".", get_full_name};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endfunction: get_full_name
        
        
        // get_mem_map_info
        
%000000 function uvm_reg_map_info uvm_reg_map::get_mem_map_info(uvm_mem mem, bit error=1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   if (!m_mems_info.exists(mem)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     if (error)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       `uvm_error("REG_NO_MAP",{"Memory '",mem.get_name(),"' not in map '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
%000000   return m_mems_info[mem];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_reg_map_info
        
~001758 function uvm_reg_map_info uvm_reg_map::get_reg_map_info(uvm_reg rg, bit error=1);
+001758  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000175  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
 001758   uvm_reg_map_info result;
+001758  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
~001758   if (!m_regs_info.exists(rg)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+001758  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     if (error)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       `uvm_error("REG_NO_MAP",{"Register '",rg.get_name(),"' not in map '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
 001758   result = m_regs_info[rg];
+001758  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
~001758   if(!result.is_initialized)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+001758  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     `uvm_warning("RegModel",{"map '",get_name(),"' does not seem to be initialized correctly, check that the top register model is locked()"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
            
 001758   return result;
+001758  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        //----------
        // Size and Overlap Detection
        //---------
        
        // set_base_addr
        
%000000 function void uvm_reg_map::set_base_addr(uvm_reg_addr_t offset);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    if (m_parent_map != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       m_parent_map.set_submap_offset(this, offset);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
%000000    else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       m_base_addr = offset;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       if (m_parent.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          uvm_reg_map top_map = get_root_map();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          top_map.Xinit_address_mapX();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
           end
        endfunction
        
        
        // get_size
        
%000000 function int unsigned uvm_reg_map::get_size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000   int unsigned max_addr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   int unsigned addr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
          // get max offset from registers
%000000   foreach (m_regs_info[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     addr = m_regs_info[rg].offset + ((rg.get_n_bytes()-1)/m_n_bytes);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     if (addr > max_addr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       max_addr = addr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
          // get max offset from memories
%000000   foreach (m_mems_info[mem_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_mem mem = mem_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     addr = m_mems_info[mem].offset + (mem.get_size() * (((mem.get_n_bytes()-1)/m_n_bytes)+1)) -1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     if (addr > max_addr) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       max_addr = addr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
          // get max offset from submaps
%000000   foreach (m_submaps[submap_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_reg_map submap=submap_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     addr = m_submaps[submap] + submap.get_size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     if (addr > max_addr)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       max_addr = addr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
%000000   return max_addr + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endfunction
        
        
        
%000000 function void uvm_reg_map::Xverify_map_configX();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           // Make sure there is a generic payload sequence for each map
           // in the model and vice-versa if this is a root sequencer
%000000    bit error;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_reg_map root_map = get_root_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    if (root_map.get_adapter() == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel", {"Map '",root_map.get_full_name(),
%000000                  "' does not have an adapter registered"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       error++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
%000000    if (root_map.get_sequencer() == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_error("RegModel", {"Map '",root_map.get_full_name(),
%000000                  "' does not have a sequencer registered"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       error++;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
%000000    if (error) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_fatal("RegModel", {"Must register an adapter and sequencer ",
%000000                  "for each top-level map in RegModel model"});
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
        endfunction
        
        
        
        // get_physical_addresses
        
%000004 function int uvm_reg_map::get_physical_addresses(uvm_reg_addr_t     base_addr,
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                                         uvm_reg_addr_t     mem_offset,
                                                         int unsigned       n_bytes,
                                                         ref uvm_reg_addr_t addr[]);
%000004    int bus_width = get_n_bytes(UVM_NO_HIER);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    uvm_reg_map  up_map;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    uvm_reg_addr_t  local_addr[];
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004    int multiplier = m_byte_addressing ? bus_width : 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=expr comment=(m_byte_addressing==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=(m_byte_addressing==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000004    addr = new [0];
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           
%000004    if (n_bytes <= 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_fatal("RegModel", $sformatf("Cannot access %0d bytes. Must be greater than 0",
%000000                                      n_bytes));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
           // First, identify the addresses within the block/system
%000004    if (n_bytes <= bus_width) begin
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004       local_addr = new [1];
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004       local_addr[0] = base_addr + (mem_offset * multiplier);
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    end else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       int n;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000       n = ((n_bytes-1) / bus_width) + 1;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       local_addr = new [n];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              
%000000       base_addr = base_addr + mem_offset * (n * multiplier);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000       case (get_endian(UVM_NO_HIER))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          UVM_LITTLE_ENDIAN: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             foreach (local_addr[i]) begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                local_addr[i] = base_addr + (i * multiplier);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                    end
                 end
%000000          UVM_BIG_ENDIAN: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             foreach (local_addr[i]) begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                n--;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                local_addr[i] = base_addr + (n * multiplier);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                    end
                 end
%000000          UVM_LITTLE_FIFO: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             foreach (local_addr[i]) begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                local_addr[i] = base_addr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                    end
                 end
%000000          UVM_BIG_FIFO: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             foreach (local_addr[i]) begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                local_addr[i] = base_addr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                    end
                 end
%000000          default: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
                    `uvm_error("RegModel",
                       {"Map has no specified endianness. ",
                        $sformatf("Cannot access %0d bytes register via its %0d byte \"%s\" interface",
%000000                n_bytes, bus_width, get_full_name())})
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                 end
              endcase
           end
        
%000004   up_map = get_parent_map();
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
           // Then translate these addresses in the parent's space
%000004    if (up_map == null) begin
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              // This is the top-most system/block!
%000004       addr = new [local_addr.size()] (local_addr);
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004       foreach (addr[i]) begin
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004          addr[i] += m_base_addr;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
%000000    end else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_addr_t  sys_addr[];
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       uvm_reg_addr_t  base_addr;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       int w, k;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
              // Scale the consecutive local address in the system's granularity
%000000       if (bus_width < up_map.get_n_bytes(UVM_NO_HIER))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         k = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              else
%000000         k = ((bus_width-1) / up_map.get_n_bytes(UVM_NO_HIER)) + 1;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000       base_addr = up_map.get_submap_offset(this);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       foreach (local_addr[i]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          int n = addr.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                 
%000000          w = up_map.get_physical_addresses(base_addr + local_addr[i] * k,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                                            0,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                                            bus_width,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                                            sys_addr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000          addr = new [n + sys_addr.size()] (addr);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          foreach (sys_addr[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             addr[n+j] = sys_addr[j];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                 end
              end
              // The width of each access is the minimum of this block or the system's width
%000000       if (w < bus_width)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          bus_width = w;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000004    return bus_width;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endfunction: get_physical_addresses
        
        
        //--------------
        // Get-By-Offset
        //--------------
        
        
        // set_submap_offset
        
%000000 function void uvm_reg_map::set_submap_offset(uvm_reg_map submap, uvm_reg_addr_t offset);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   if (submap == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     `uvm_error("REG/NULL","set_submap_offset: submap handle is null")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
%000000   m_submaps[submap] = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   if (m_parent.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_reg_map root_map = get_root_map();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     root_map.Xinit_address_mapX();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        endfunction
        
        
        // get_submap_offset
        
%000000 function uvm_reg_addr_t uvm_reg_map::get_submap_offset(uvm_reg_map submap);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000   if (submap == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     `uvm_error("REG/NULL","set_submap_offset: submap handle is null")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
%000000   if (!m_submaps.exists(submap)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
            `uvm_error("RegModel",{"Map '",submap.get_full_name(),
%000000                       "' is not a submap of '",get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
%000000   return m_submaps[submap];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_reg_by_offset
        
 000600 function uvm_reg uvm_reg_map::get_reg_by_offset(uvm_reg_addr_t offset,
+000600  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                                        bit            read = 1);
~000600    if (!m_parent.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000600  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       `uvm_error("RegModel", $sformatf("Cannot get register by offset: Block %s is not locked.", m_parent.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
~000600    if (!read && m_regs_by_offset_wo.exists(offset))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000600  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      return m_regs_by_offset_wo[offset];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           
%000000    if (m_regs_by_offset.exists(offset))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      return m_regs_by_offset[offset];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000600    return null;
+000600  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // get_mem_by_offset
        
%000000 function uvm_mem uvm_reg_map::get_mem_by_offset(uvm_reg_addr_t offset);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    if (!m_parent.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       `uvm_error("RegModel", $sformatf("Cannot memory register by offset: Block %s is not locked.", m_parent.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000000    foreach (m_mems_by_offset[range]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       if (range.min <= offset && offset <= range.max) begin
-000000  point: type=expr comment=((offset <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((range[159:96] <= offset)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((range[159:96] <= offset)==1 && (offset <= range[95:32])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          return m_mems_by_offset[range];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
           end
           
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // Xinit_address_mapX
        
%000001 function void uvm_reg_map::Xinit_address_mapX();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000001    int unsigned bus_width;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000001    uvm_reg_map top_map = get_root_map();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000001    if (this == top_map) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001      top_map.m_regs_by_offset.delete();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001      top_map.m_regs_by_offset_wo.delete();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000001      top_map.m_mems_by_offset.delete();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000001    foreach (m_submaps[l]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      uvm_reg_map map=l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      map.Xinit_address_mapX();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        
%000004    foreach (m_regs_info[rg_]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004      uvm_reg rg = rg_;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004      m_regs_info[rg].is_initialized=1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004      if (!m_regs_info[rg].unmapped) begin
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004         string rg_acc = rg.Xget_fields_accessX(this);
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004        uvm_reg_addr_t addrs[];
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                
%000004        bus_width = get_physical_addresses(m_regs_info[rg].offset,0,rg.get_n_bytes(),addrs);
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                
%000004        foreach (addrs[i]) begin
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000004          uvm_reg_addr_t addr = addrs[i];
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000004          if (top_map.m_regs_by_offset.exists(addr)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000             uvm_reg rg2 = top_map.m_regs_by_offset[addr];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             string rg2_acc = rg2.Xget_fields_accessX(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                    
                    // If the register at the same address is RO or WO
                    // and this register is WO or RO, this is OK
%000000             if (rg_acc == "RO" && rg2_acc == "WO") begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg2_acc == %22WO%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg_acc == %22RO%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg_acc == %22RO%22)==1 && (rg2_acc == %22WO%22)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                top_map.m_regs_by_offset[addr]    = rg;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                uvm_reg_read_only_cbs::add(rg);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                top_map.m_regs_by_offset_wo[addr] = rg2;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                uvm_reg_write_only_cbs::add(rg2);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
                    end
%000000             else if (rg_acc == "WO" && rg2_acc == "RO") begin
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg2_acc == %22RO%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg_acc == %22WO%22)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((rg_acc == %22WO%22)==1 && (rg2_acc == %22RO%22)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                top_map.m_regs_by_offset_wo[addr] = rg;
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                uvm_reg_write_only_cbs::add(rg);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                uvm_reg_read_only_cbs::add(rg2);
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                    end
%000000             else begin
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                string a;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                a = $sformatf("%0h",addr);
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                       `uvm_warning("RegModel", {"In map '",get_full_name(),"' register '",
                                                 rg.get_full_name(), "' maps to same address as register '",
%000000                                          top_map.m_regs_by_offset[addr].get_full_name(),"': 'h",a})
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                    end
                 end
                 else
%000004             top_map.m_regs_by_offset[addr] = rg;
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                  
%000004          foreach (top_map.m_mems_by_offset[range]) begin
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000            if (addr >= range.min && addr <= range.max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addr <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addr >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addr >= range[159:96])==1 && (addr <= range[95:32])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000              string a,b;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000              a = $sformatf("%0h",addr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000              b = $sformatf("[%0h:%0h]",range.min,range.max);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                     `uvm_warning("RegModel", {"In map '",get_full_name(),"' register '",
                         rg.get_full_name(), "' with address ",a,
                         "maps to same address as memory '",
%000000                  top_map.m_mems_by_offset[range].get_full_name(),"': ",b})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                     end
                 end
               end
%000004        m_regs_info[rg].addr = addrs;
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
             end
           end
        
%000001    foreach (m_mems_info[mem_]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      uvm_mem mem = mem_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000      if (!m_mems_info[mem].unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000        uvm_reg_addr_t addrs[],addrs_max[];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        uvm_reg_addr_t min, max, min2, max2;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        int unsigned stride;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000        bus_width = get_physical_addresses(m_mems_info[mem].offset,0,mem.get_n_bytes(),addrs);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        min = (addrs[0] < addrs[addrs.size()-1]) ? addrs[0] : addrs[addrs.size()-1];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs.at(32'sh0) < addrs.at((addrs.size() - 32'sh1)))==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs.at(32'sh0) < addrs.at((addrs.size() - 32'sh1)))==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        min2 = addrs[0];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000        void'(get_physical_addresses(m_mems_info[mem].offset,(mem.get_size()-1),mem.get_n_bytes(),addrs_max));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        max = (addrs_max[0] > addrs_max[addrs_max.size()-1]) ? addrs_max[0] : addrs_max[addrs_max.size()-1];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs_max.at(32'sh0) > addrs_max.at((addrs_max.size() - 32'sh1)))==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((addrs_max.at(32'sh0) > addrs_max.at((addrs_max.size() - 32'sh1)))==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        max2 = addrs_max[0];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
               // address interval between consecutive mem offsets
%000000        stride = (max2 - min2)/(mem.get_size()-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000        foreach (top_map.m_regs_by_offset[reg_addr]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          if (reg_addr >= min && reg_addr <= max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((reg_addr <= max)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((reg_addr >= min)==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((reg_addr >= min)==1 && (reg_addr <= max)==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000            string a;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000            a = $sformatf("%0h",reg_addr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                   `uvm_warning("RegModel", {"In map '",get_full_name(),"' memory '",
                       mem.get_full_name(), "' maps to same address as register '",
%000000                top_map.m_regs_by_offset[reg_addr].get_full_name(),"': 'h",a})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                 end
               end
        
%000000        foreach (top_map.m_mems_by_offset[range]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          if (min <= range.max && max >= range.max ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000              min <= range.min && max >= range.min ||
-000000  point: type=expr comment=((max >= range[95:32])==0 && (max >= range[159:96])==0 && (max <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((max >= range[95:32])==0 && (max >= range[159:96])==0 && (min >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((max >= range[95:32])==0 && (min <= range[159:96])==0 && (max <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((max >= range[95:32])==0 && (min <= range[159:96])==0 && (min >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[159:96])==1 && (max >= range[159:96])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==0 && (max >= range[159:96])==0 && (max <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==0 && (max >= range[159:96])==0 && (min >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==0 && (min <= range[159:96])==0 && (max <= range[95:32])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==0 && (min <= range[159:96])==0 && (min >= range[159:96])==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min <= range[95:32])==1 && (max >= range[95:32])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((min >= range[159:96])==1 && (max <= range[95:32])==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000              min >= range.min && max <= range.max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000            string a;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000            a = $sformatf("[%0h:%0h]",min,max);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                   `uvm_warning("RegModel", {"In map '",get_full_name(),"' memory '",
                       mem.get_full_name(), "' overlaps with address range of memory '",
%000000                top_map.m_mems_by_offset[range].get_full_name(),"': 'h",a})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                   end
               end
        
%000000        begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          uvm_reg_map_addr_range range = '{ min, max, stride };
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          top_map.m_mems_by_offset[ range ] = mem;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          m_mems_info[mem].addr  = addrs;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          m_mems_info[mem].mem_range = range;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
               end
             end
           end
        
           // If the block has no registers or memories,
           // bus_width won't be set
%000001    if (bus_width == 0) bus_width = m_n_bytes;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000001    m_system_n_bytes = bus_width;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        //-----------
        // Bus Access
        //-----------
        
 000175 function void uvm_reg_map::Xget_bus_infoX(uvm_reg_item rw,
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175                                           output uvm_reg_map_info map_info,
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175                                           output int size,
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175                                           output int lsb,
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175                                           output int addr_skip);
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000   if (rw.element_kind == UVM_MEM) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_mem mem;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     if(rw.element == null || !$cast(mem,rw.element))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_fatal("REG/CAST", {"uvm_reg_item 'element_kind' is UVM_MEM, ",
%000000                  "but 'element' does not point to a memory: ",rw.get_name()})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     map_info = get_mem_map_info(mem);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     size = mem.get_n_bits();
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
 000175   else if (rw.element_kind == UVM_REG) begin
+000175  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175     uvm_reg rg;
+000175  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
~000175     if(rw.element == null || !$cast(rg,rw.element))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_fatal("REG/CAST", {"uvm_reg_item 'element_kind' is UVM_REG, ",
%000000                  "but 'element' does not point to a register: ",rw.get_name()})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175     map_info = get_reg_map_info(rg);
+000175  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
 000175     size = rg.get_n_bits();
+000175  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
%000000   else if (rw.element_kind == UVM_FIELD) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_reg_field field;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     if(rw.element == null || !$cast(field,rw.element))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              `uvm_fatal("REG/CAST", {"uvm_reg_item 'element_kind' is UVM_FIELD, ",
%000000                  "but 'element' does not point to a field: ",rw.get_name()})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     map_info = get_reg_map_info(field.get_parent());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     size = field.get_n_bits();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     lsb = field.get_lsb_pos();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     addr_skip = lsb/(get_n_bytes()*8);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        endfunction
        
        
        
        
        // do_write(uvm_reg_item rw)
        
 000050 task uvm_reg_map::do_write(uvm_reg_item rw);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000050   uvm_sequence_base tmp_parent_seq;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   uvm_reg_map system_map = get_root_map();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   uvm_reg_adapter adapter = system_map.get_adapter();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   uvm_sequencer_base sequencer = system_map.get_sequencer();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000050   if (adapter != null && adapter.parent_sequence != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_object o;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_sequence_base seq;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     o = adapter.parent_sequence.clone();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     assert($cast(seq,o));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     seq.set_parent_sequence(rw.parent);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.parent = seq;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     tmp_parent_seq = seq;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
~000050   if (rw.parent == null) begin
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050      rw.parent = new("default_parent_seq");
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050      tmp_parent_seq = rw.parent;
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
~000050   if (adapter == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.set_sequencer(sequencer);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.parent.start_item(rw,rw.prior);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.parent.finish_item(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.end_event.wait_on();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
 000050   else begin
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050     do_bus_write(rw, sequencer, adapter);
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
~000050   if (tmp_parent_seq != null)
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050     sequencer.m_sequence_exiting(tmp_parent_seq);
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endtask
        
        
        // do_read(uvm_reg_item rw)
        
 000125 task uvm_reg_map::do_read(uvm_reg_item rw);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000125   uvm_sequence_base tmp_parent_seq;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   uvm_reg_map system_map = get_root_map();
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   uvm_reg_adapter adapter = system_map.get_adapter();
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   uvm_sequencer_base sequencer = system_map.get_sequencer();
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000125   if (adapter != null && adapter.parent_sequence != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_object o;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     uvm_sequence_base seq;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     o = adapter.parent_sequence.clone();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     assert($cast(seq,o));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     seq.set_parent_sequence(rw.parent);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.parent = seq;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     tmp_parent_seq = seq;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
~000125   if (rw.parent == null) begin
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125     rw.parent = new("default_parent_seq");
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125     tmp_parent_seq = rw.parent;
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
~000125   if (adapter == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.set_sequencer(sequencer);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.parent.start_item(rw,rw.prior);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.parent.finish_item(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     rw.end_event.wait_on();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
 000125   else begin
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125     do_bus_read(rw, sequencer, adapter);
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
~000125   if (tmp_parent_seq != null)
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125     sequencer.m_sequence_exiting(tmp_parent_seq);
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        endtask
        
        
        // do_bus_write
        
 000050 task uvm_reg_map::do_bus_write (uvm_reg_item rw,
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                        uvm_sequencer_base sequencer,
                                        uvm_reg_adapter adapter);
        
 000050   uvm_reg_addr_t     addrs[$];
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   uvm_reg_map        system_map = get_root_map();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   int unsigned       bus_width  = get_n_bytes();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   uvm_reg_byte_en_t  byte_en    = -1;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   uvm_reg_map_info   map_info;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   int                n_bits;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   int                lsb;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   int                skip;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   int unsigned       curr_byte;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   int                n_access_extra, n_access;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   int               n_bits_init;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000050   Xget_bus_infoX(rw, map_info, n_bits_init, lsb, skip);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050   addrs=map_info.addr;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
          // if a memory, adjust addresses based on offset
~000050   if (rw.element_kind == UVM_MEM)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     foreach (addrs[i])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       addrs[i] = addrs[i] + map_info.mem_range.stride * rw.offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000050   foreach (rw.value[val_idx]) begin: foreach_value
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000050      uvm_reg_data_t value = rw.value[val_idx];
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
            /* calculate byte_enables */
~000050     if (rw.element_kind == UVM_FIELD) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       int temp_be;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       int idx;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       n_access_extra = lsb%(bus_width*8);                
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       n_access = n_access_extra + n_bits_init;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       temp_be = n_access_extra;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       value = value << n_access_extra;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       while(temp_be >= 8) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          byte_en[idx++] = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          temp_be -= 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
              end                        
%000000       temp_be += n_bits_init;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       while(temp_be > 0) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          byte_en[idx++] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          temp_be -= 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
%000000       byte_en &= (1<<idx)-1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       for (int i=0; i<skip; i++)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         void'(addrs.pop_front());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       while (addrs.size() > (n_bits_init/(bus_width*8) + 1))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         void'(addrs.pop_back());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
            end
 000050     curr_byte=0;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050     n_bits= n_bits_init;     
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                      
~000050     foreach(addrs[i]) begin: foreach_addr
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000050       uvm_sequence_item bus_req;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       uvm_reg_bus_op rw_access;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       uvm_reg_data_t data;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
        
 000050       data = (value >> (curr_byte*8)) & ((1'b1 << (bus_width * 8))-1);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
               
              `uvm_info(get_type_name(),
                 $sformatf("Writing 'h%0h at 'h%0h via map \"%s\"...",
~000050               data, addrs[i], rw.map.get_full_name()), UVM_FULL);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000050       if (rw.element_kind == UVM_FIELD) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         for (int z=0;z<bus_width;z++)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000           rw_access.byte_en[z] = byte_en[curr_byte+z];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
                        
 000050       rw_access.kind    = rw.kind;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       rw_access.addr    = addrs[i];
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       rw_access.data    = data;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
~000050       rw_access.n_bits  = (n_bits > bus_width*8) ? bus_width*8 : n_bits;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=expr comment=((n_bits > (bus_width * 32'sh8))==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((n_bits > (bus_width * 32'sh8))==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       rw_access.byte_en = byte_en;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000050       adapter.m_set_item(rw);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       bus_req = adapter.reg2bus(rw_access);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       adapter.m_set_item(null);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
              
~000050       if (bus_req == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         `uvm_fatal("RegMem",{"adapter [",adapter.get_name(),"] didnt return a bus transaction"});
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              
 000050       bus_req.set_sequencer(sequencer);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       rw.parent.start_item(bus_req,rw.prior);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000050       if (rw.parent != null && i == 0)
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050         rw.parent.mid_do(rw);
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000050       rw.parent.finish_item(bus_req);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       bus_req.end_event.wait_on();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000050       if (adapter.provides_responses) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         uvm_sequence_item bus_rsp;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         uvm_access_e op;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                // TODO: need to test for right trans type, if not put back in q
%000000         rw.parent.get_base_response(bus_rsp);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         adapter.bus2reg(bus_rsp,rw_access);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
 000050       else begin
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050         adapter.bus2reg(bus_req,rw_access);
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
        
~000050       if (rw.parent != null && i == addrs.size()-1)
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050         rw.parent.post_do(rw);
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000050       rw.status = rw_access.status;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
              `uvm_info(get_type_name(),
                 $sformatf("Wrote 'h%0h at 'h%0h via map \"%s\": %s...",
~000050             data, addrs[i], rw.map.get_full_name(), rw.status.name()), UVM_FULL)
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000050       if (rw.status == UVM_NOT_OK)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000050       curr_byte += bus_width;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       n_bits -= bus_width * 8;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
            end: foreach_addr
        
~000050     foreach (addrs[i])
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000050       addrs[i] = addrs[i] + map_info.mem_range.stride;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
          end: foreach_value
        
        endtask: do_bus_write
        
        
        // do_bus_read
        
 000125 task uvm_reg_map::do_bus_read (uvm_reg_item rw,
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                                       uvm_sequencer_base sequencer,
                                       uvm_reg_adapter adapter);
        
 000125   uvm_reg_addr_t addrs[$];
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   uvm_reg_map        system_map = get_root_map();
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   int unsigned       bus_width  = get_n_bytes();
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   uvm_reg_byte_en_t  byte_en    = -1;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   uvm_reg_map_info   map_info;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   int                size, n_bits;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   int                skip;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   int                lsb;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   int unsigned       curr_byte;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   int n_access_extra, n_access;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000125   Xget_bus_infoX(rw, map_info, n_bits, lsb, skip);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   addrs=map_info.addr;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125   size = n_bits;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
          // if a memory, adjust addresses based on offset
~000125   if (rw.element_kind == UVM_MEM)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     foreach (addrs[i])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       addrs[i] = addrs[i] + map_info.mem_range.stride * rw.offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000125   foreach (rw.value[val_idx]) begin: foreach_value
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
            /* calculate byte_enables */
~000125     if (rw.element_kind == UVM_FIELD) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       int temp_be;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       int idx;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       n_access_extra = lsb%(bus_width*8);                
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       n_access = n_access_extra + n_bits;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       temp_be = n_access_extra;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       while(temp_be >= 8) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          byte_en[idx++] = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          temp_be -= 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
              end                        
%000000       temp_be += n_bits;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       while(temp_be > 0) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          byte_en[idx++] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          temp_be -= 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
%000000       byte_en &= (1<<idx)-1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       for (int i=0; i<skip; i++)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         void'(addrs.pop_front());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       while (addrs.size() > (n_bits/(bus_width*8) + 1))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         void'(addrs.pop_back());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
            end
 000125     curr_byte=0;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125     rw.value[val_idx] = 0;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
                      
~000125     foreach (addrs[i]) begin
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000125       uvm_sequence_item bus_req;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       uvm_reg_bus_op rw_access;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       uvm_reg_data_logic_t data;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
               
        
              `uvm_info(get_type_name(),
                 $sformatf("Reading address 'h%0h via map \"%s\"...",
~000125                    addrs[i], get_full_name()), UVM_FULL);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
                        
~000125       if (rw.element_kind == UVM_FIELD)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         for (int z=0;z<bus_width;z++)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000           rw_access.byte_en[z] = byte_en[curr_byte+z];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000125       rw_access.kind = rw.kind;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       rw_access.addr = addrs[i];
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       rw_access.data = 'h0;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       rw_access.byte_en = byte_en;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
~000125       rw_access.n_bits = (n_bits > bus_width*8) ? bus_width*8 : n_bits;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=expr comment=((n_bits > (bus_width * 32'sh8))==0) => 0 hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=expr comment=((n_bits > (bus_width * 32'sh8))==1) => 1 hier=uvm_pkg::uvm_reg_map__Vclpkg
                                  
 000125       adapter.m_set_item(rw);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       bus_req = adapter.reg2bus(rw_access);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       adapter.m_set_item(null);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
~000125       if (bus_req == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         `uvm_fatal("RegMem",{"adapter [",adapter.get_name(),"] didnt return a bus transaction"});
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000125       bus_req.set_sequencer(sequencer);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       rw.parent.start_item(bus_req,rw.prior);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000125       if (rw.parent != null && i == 0) begin
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125         rw.parent.mid_do(rw);
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
        
 000125       rw.parent.finish_item(bus_req);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       bus_req.end_event.wait_on();
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000125       if (adapter.provides_responses) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         uvm_sequence_item bus_rsp;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         uvm_access_e op;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                // TODO: need to test for right trans type, if not put back in q
%000000         rw.parent.get_base_response(bus_rsp);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         adapter.bus2reg(bus_rsp,rw_access);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
 000125       else begin
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125         adapter.bus2reg(bus_req,rw_access);
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
              end
        
 000125       data = rw_access.data & ((1<<bus_width*8)-1);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000125       rw.status = rw_access.status;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000125       if (rw.status == UVM_IS_OK && (^data) === 1'bx)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         rw.status = UVM_HAS_X;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                 
              `uvm_info(get_type_name(),
                 $sformatf("Read 'h%0h at 'h%0h via map \"%s\": %s...", data,
~000125                    addrs[i], get_full_name(), rw.status.name()), UVM_FULL);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000125       if (rw.status == UVM_NOT_OK)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000          break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000125       rw.value[val_idx] |= data << curr_byte*8;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000125       if (rw.parent != null && i == addrs.size()-1)
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125         rw.parent.post_do(rw);
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
        
 000125       curr_byte += bus_width;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       n_bits -= bus_width * 8;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
            end
        
~000125     foreach (addrs[i])
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
 000125       addrs[i] = addrs[i] + map_info.mem_range.stride;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
~000125     if (rw.element_kind == UVM_FIELD)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000        rw.value[val_idx] = (rw.value[val_idx] >> (n_access_extra)) & ((1<<size)-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
          end
        
        endtask: do_bus_read
        
        
        
        //-------------
        // Standard Ops
        //-------------
        
        // do_print
        
%000000 function void uvm_reg_map::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_reg  regs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_vreg vregs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_mem  mems[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_endianness_e endian;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_reg_map maps[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    string prefix;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_sequencer_base sqr=get_sequencer();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
          
%000000    super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        //  printer.print_generic(get_name(), get_type_name(), -1, convert2string()); 
        
%000000    endian = get_endian(UVM_NO_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        //   $sformat(convert2string, "%s -- %0d bytes (%s)", convert2string,
        //            get_n_bytes(UVM_NO_HIER), endian.name());
           
%000000    printer.print_generic("endian","",-2,endian.name()); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    if(sqr!=null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000     printer.print_generic("effective sequencer",sqr.get_type_name(),-2,sqr.get_full_name());     
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
                     
%000000    get_registers(regs,UVM_NO_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    foreach (regs[j]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         printer.print_generic(regs[j].get_name(), regs[j].get_type_name(),-2,$sformatf("@%0d +'h%0x",regs[j].get_inst_id(),regs[j].get_address(this)));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           
           
%000000    get_memories(mems);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    foreach (mems[j]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         printer.print_generic(mems[j].get_name(), mems[j].get_type_name(),-2,$sformatf("@%0d +'h%0x",mems[j].get_inst_id(),mems[j].get_address(0,this)));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           
%000000    get_virtual_registers(vregs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    foreach (vregs[j]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         printer.print_generic(vregs[j].get_name(), vregs[j].get_type_name(),-2,$sformatf("@%0d +'h%0x",vregs[j].get_inst_id(),vregs[j].get_address(0,this)));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
            
%000000    get_submaps(maps);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    foreach (maps[j]) 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000         printer.print_object(maps[j].get_name(),maps[j]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        // convert2string
        
%000000 function string uvm_reg_map::convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_reg  regs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_vreg vregs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_mem  mems[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    uvm_endianness_e endian;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    string prefix;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        
%000000    $sformat(convert2string, "%sMap %s", prefix, get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    endian = get_endian(UVM_NO_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    $sformat(convert2string, "%s -- %0d bytes (%s)", convert2string,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000             get_n_bytes(UVM_NO_HIER), endian.name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    get_registers(regs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    foreach (regs[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       $sformat(convert2string, "%s\n%s", convert2string,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                regs[j].convert2string());//{prefix, "   "}, this));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
%000000    get_memories(mems);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    foreach (mems[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       $sformat(convert2string, "%s\n%s", convert2string,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                mems[j].convert2string());//{prefix, "   "}, this));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
%000000    get_virtual_registers(vregs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000    foreach (vregs[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000       $sformat(convert2string, "%s\n%s", convert2string,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
%000000                vregs[j].convert2string());//{prefix, "   "}, this));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
           end
        endfunction
        
        
        // clone
        
%000000 function uvm_object uvm_reg_map::clone();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
          //uvm_rap_map me;
          //me = new this;
          //return me;
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
        endfunction
        
        
        // do_copy
        
%000000 function void uvm_reg_map::do_copy (uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_map__Vclpkg
          //uvm_reg_map rhs_;
          //assert($cast(rhs_,rhs));
        
          //rhs_.regs = regs;
          //rhs_.mems = mems;
          //rhs_.vregs = vregs;
          //rhs_.blks = blks;
          //... and so on
        endfunction
        
        
