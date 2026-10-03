//      // verilator_coverage annotation
        //
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
        
        
        
        //------------------------------------------------------------------------
        // Class: uvm_reg_block
        //
        // Block abstraction base class
        //
        // A block represents a design hierarchy. It can contain registers,
        // register files, memories and sub-blocks.
        //
        // A block has one or more address maps, each corresponding to a physical
        // interface on the block.
        //
        //------------------------------------------------------------------------
        virtual class uvm_reg_block extends uvm_object;
        
           local uvm_reg_block  parent;
        
           local static bit     m_roots[uvm_reg_block];
           local int unsigned   blks[uvm_reg_block];
           local int unsigned   regs[uvm_reg];
           local int unsigned   vregs[uvm_vreg];
           local int unsigned   mems[uvm_mem];
           local bit            maps[uvm_reg_map];
        
           // Variable: default_path
           // Default access path for the registers and memories in this block.
%000001    uvm_path_e      default_path = UVM_DEFAULT_PATH;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001    local string         default_hdl_path = "RTL";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           local uvm_reg_backdoor backdoor;
           local uvm_object_string_pool #(uvm_queue #(string)) hdl_paths_pool;
           local string         root_hdl_paths[string];
        
           local bit            locked;
        
           local int            has_cover;
           local int            cover_on;
           local string         fname;
           local int            lineno;
        
           local static int id;
        
           //----------------------
           // Group: Initialization
           //----------------------
        
           // Function: new
           //
           // Create a new instance and type-specific configuration
           //
           // Creates an instance of a block abstraction class with the specified
           // name.
           //
           // ~has_coverage~ specifies which functional coverage models are present in
           // the extension of the block abstraction class.
           // Multiple functional coverage models may be specified by adding their
           // symbolic names, as defined by the <uvm_coverage_model_e> type.
           //
           extern function new(string name="", int has_coverage=UVM_NO_COVERAGE);
        
        
           // Function: configure
           //
           // Instance-specific configuration
           //
           // Specify the parent block of this block.
           // A block without parent is a root block.
           //
           // If the block file corresponds to a hierarchical RTL structure,
           // it's contribution to the HDL path is specified as the ~hdl_path~.
           // Otherwise, the block does not correspond to a hierarchical RTL
           // structure (e.g. it is physically flattened) and does not contribute
           // to the hierarchical HDL path of any contained registers or memories.
           //
           extern function void configure(uvm_reg_block parent=null,
                                          string hdl_path="");
        
        
           // Function: create_map
           //
           // Create an address map in this block
           //
           // Create an address map with the specified ~name~, then
           // configures it with the following properties.
           //
           // base_addr - the base address for the map. All registers, memories,
           //             and sub-blocks within the map will be at offsets to this
           //             address
           //
           // n_bytes   - the byte-width of the bus on which this map is used 
           //
           // endian    - the endian format. See <uvm_endianness_e> for possible
           //             values
           //
           // byte_addressing - specifies whether consecutive addresses refer are 1 byte
           //             apart (TRUE) or ~n_bytes~ apart (FALSE). Default is TRUE. 
           //
           //| APB = create_map("APB", 0, 1, UVM_LITTLE_ENDIAN, 1);
           //
           extern virtual function uvm_reg_map create_map(string name,
                                                          uvm_reg_addr_t base_addr,
                                                          int unsigned n_bytes,
                                                          uvm_endianness_e endian,
                                                          bit byte_addressing = 1);
        
        
           // Function: check_data_width
           //
           // Check that the specified data width (in bits) is less than
           // or equal to the value of `UVM_REG_DATA_WIDTH
           //
           // This method is designed to be called by a static initializer
           //
           //| class my_blk extends uvm_reg_block;
           //|   local static bit m_data_width = check_data_width(356);
           //|   ...
           //| endclass
           //
           extern protected static function bit check_data_width(int unsigned width);
        
        
        
           // Function: set_default_map
           //
           // Defines the default address map
           //
           // Set the specified address map as the <default_map> for this
           // block. The address map must be a map of this address block.
           //
           extern function void set_default_map (uvm_reg_map map);
        
        
           // Variable: default_map
           //
           // Default address map
           //
           // Default address map for this block, to be used when no
           // address map is specified for a register operation and that
           // register is accessible from more than one address map.
           //
           // It is also the implciit address map for a block with a single,
           // unamed address map because it has only one physical interface.
           //
           uvm_reg_map default_map;
        
           extern function uvm_reg_map get_default_map ();
        
           extern virtual function void set_parent(uvm_reg_block parent);
        
           /*local*/ extern function void add_block (uvm_reg_block blk);
           /*local*/ extern function void add_map   (uvm_reg_map map);
           /*local*/ extern function void add_reg   (uvm_reg  rg);
           /*local*/ extern function void add_vreg  (uvm_vreg vreg);
           /*local*/ extern function void add_mem   (uvm_mem  mem);
        
        
           // Function: lock_model
           //
           // Lock a model and build the address map.
           //
           // Recursively lock an entire register model
           // and build the address maps to enable the
           // <uvm_reg_map::get_reg_by_offset()> and
           // <uvm_reg_map::get_mem_by_offset()> methods.
           //
           // Once locked, no further structural changes,
           // such as adding registers or memories,
           // can be made.
           //
           // It is not possible to unlock a model.
           //
           extern virtual function void lock_model();
        
        
           // Function: is_locked
           //
           // Return TRUE if the model is locked.
           //
           extern function bit is_locked();
        
        
           //---------------------
           // Group: Introspection
           //---------------------
        
        
           // Function: get_name
           //
           // Get the simple name
           //
           // Return the simple object name of this block.
           //
        
        
           // Function: get_full_name
           //
           // Get the hierarchical name
           //
           // Return the hierarchal name of this block.
           // The base of the hierarchical name is the root block.
           //
           extern virtual function string get_full_name();
        
        
           // Function: get_parent
           //
           // Get the parent block
           //
           // If this a top-level block, returns ~null~. 
           //
           extern virtual function uvm_reg_block get_parent();
        
        
           // Function: get_root_blocks
           //
           // Get the all root blocks
           //
           // Returns an array of all root blocks in the simulation.
           //
           extern static  function void get_root_blocks(ref uvm_reg_block blks[$]);
              
        
           // Function: find_blocks
           //
           // Find the blocks whose hierarchical names match the
           // specified ~name~ glob.
           // If a ~root~ block is specified, the name of the blocks are
           // relative to that block, otherwise they are absolute.
           //
           // Returns the number of blocks found.
           //
           extern static function int find_blocks(input string        name,
                                                  ref   uvm_reg_block blks[$],
                                                  input uvm_reg_block root = null,
                                                  input uvm_object    accessor = null);
              
        
           // Function: find_block
           //
           // Find the first block whose hierarchical names match the
           // specified ~name~ glob.
           // If a ~root~ block is specified, the name of the blocks are
           // relative to that block, otherwise they are absolute.
           //
           // Returns the first block found or ~null~ otherwise.
           // A warning is issued if more than one block is found.
           //
           extern static function uvm_reg_block find_block(input string        name,
                                                           input uvm_reg_block root = null,
                                                           input uvm_object    accessor = null);
              
        
           // Function: get_blocks
           //
           // Get the sub-blocks
           //
           // Get the blocks instantiated in this blocks.
           // If ~hier~ is TRUE, recursively includes any sub-blocks.
           //
           extern virtual function void get_blocks (ref uvm_reg_block  blks[$],
                                                    input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_maps
           //
           // Get the address maps
           //
           // Get the address maps instantiated in this block.
           //
           extern virtual function void get_maps (ref uvm_reg_map maps[$]);
        
        
           // Function: get_registers
           //
           // Get the registers
           //
           // Get the registers instantiated in this block.
           // If ~hier~ is TRUE, recursively includes the registers
           // in the sub-blocks.
           //
           // Note that registers may be located in different and/or multiple
           // address maps. To get the registers in a specific address map,
           // use the <uvm_reg_map::get_registers()> method.
           //
           extern virtual function void get_registers (ref uvm_reg regs[$],
                                                       input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_fields
           //
           // Get the fields
           //
           // Get the fields in the registers instantiated in this block.
           // If ~hier~ is TRUE, recursively includes the fields of the registers
           // in the sub-blocks.
           //
           extern virtual function void get_fields (ref uvm_reg_field  fields[$],
                                                    input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_memories
           //
           // Get the memories
           //
           // Get the memories instantiated in this block.
           // If ~hier~ is TRUE, recursively includes the memories
           // in the sub-blocks.
           //
           // Note that memories may be located in different and/or multiple
           // address maps. To get the memories in a specific address map,
           // use the <uvm_reg_map::get_memories()> method.
           //
           extern virtual function void get_memories (ref uvm_mem mems[$],
                                                      input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_virtual_registers
           //
           // Get the virtual registers
           //
           // Get the virtual registers instantiated in this block.
           // If ~hier~ is TRUE, recursively includes the virtual registers
           // in the sub-blocks.
           //
           extern virtual function void get_virtual_registers(ref uvm_vreg regs[$],
                                                        input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_virtual_fields
           //
           // Get the virtual fields
           //
           // Get the virtual fields from the virtual registers instantiated
           // in this block.
           // If ~hier~ is TRUE, recursively includes the virtual fields
           // in the virtual registers in the sub-blocks.
           //
           extern virtual function void get_virtual_fields (ref uvm_vreg_field fields[$],
                                                         input uvm_hier_e hier=UVM_HIER);
        
        
           // Function: get_block_by_name
           //
           // Finds a sub-block with the specified simple name.
           //
           // The name is the simple name of the block, not a hierarchical name.
           // relative to this block.
           // If no block with that name is found in this block, the sub-blocks
           // are searched for a block of that name and the first one to be found
           // is returned.
           //
           // If no blocks are found, returns ~null~.
           //
           extern virtual function uvm_reg_block get_block_by_name (string name);  
        
        
           // Function: get_map_by_name
           //
           // Finds an address map with the specified simple name.
           //
           // The name is the simple name of the address map, not a hierarchical name.
           // relative to this block.
           // If no map with that name is found in this block, the sub-blocks
           // are searched for a map of that name and the first one to be found
           // is returned.
           //
           // If no address maps are found, returns ~null~.
           //
           extern virtual function uvm_reg_map get_map_by_name (string name);
        
        
           // Function: get_reg_by_name
           //
           // Finds a register with the specified simple name.
           //
           // The name is the simple name of the register, not a hierarchical name.
           // relative to this block.
           // If no register with that name is found in this block, the sub-blocks
           // are searched for a register of that name and the first one to be found
           // is returned.
           //
           // If no registers are found, returns ~null~.
           //
           extern virtual function uvm_reg get_reg_by_name (string name);
        
        
           // Function: get_field_by_name
           //
           // Finds a field with the specified simple name.
           //
           // The name is the simple name of the field, not a hierarchical name.
           // relative to this block.
           // If no field with that name is found in this block, the sub-blocks
           // are searched for a field of that name and the first one to be found
           // is returned.
           //
           // If no fields are found, returns ~null~.
           //
           extern virtual function uvm_reg_field get_field_by_name (string name);
        
        
           // Function: get_mem_by_name
           //
           // Finds a memory with the specified simple name.
           //
           // The name is the simple name of the memory, not a hierarchical name.
           // relative to this block.
           // If no memory with that name is found in this block, the sub-blocks
           // are searched for a memory of that name and the first one to be found
           // is returned.
           //
           // If no memories are found, returns ~null~.
           //
           extern virtual function uvm_mem get_mem_by_name (string name);
        
        
           // Function: get_vreg_by_name
           //
           // Finds a virtual register with the specified simple name.
           //
           // The name is the simple name of the virtual register,
           // not a hierarchical name.
           // relative to this block.
           // If no virtual register with that name is found in this block,
           // the sub-blocks are searched for a virtual register of that name
           // and the first one to be found is returned.
           //
           // If no virtual registers are found, returns ~null~.
           //
           extern virtual function uvm_vreg get_vreg_by_name (string name);
        
        
           // Function: get_vfield_by_name
           //
           // Finds a virtual field with the specified simple name.
           //
           // The name is the simple name of the virtual field,
           // not a hierarchical name.
           // relative to this block.
           // If no virtual field with that name is found in this block,
           // the sub-blocks are searched for a virtual field of that name
           // and the first one to be found is returned.
           //
           // If no virtual fields are found, returns ~null~.
           //
           extern virtual function uvm_vreg_field get_vfield_by_name (string name);
        
        
           //----------------
           // Group: Coverage
           //----------------
        
        
           // Function: build_coverage
           //
           // Check if all of the specified coverage model must be built.
           //
           // Check which of the specified coverage model must be built
           // in this instance of the block abstraction class,
           // as specified by calls to <uvm_reg::include_coverage()>.
           //
           // Models are specified by adding the symbolic value of individual
           // coverage model as defined in <uvm_coverage_model_e>.
           // Returns the sum of all coverage models to be built in the
           // block model.
           //
           extern protected function uvm_reg_cvr_t build_coverage(uvm_reg_cvr_t models);
        
        
           // Function: add_coverage
           //
           // Specify that additional coverage models are available.
           //
           // Add the specified coverage model to the coverage models
           // available in this class.
           // Models are specified by adding the symbolic value of individual
           // coverage model as defined in <uvm_coverage_model_e>.
           //
           // This method shall be called only in the constructor of
           // subsequently derived classes.
           //
           extern virtual protected function void add_coverage(uvm_reg_cvr_t models);
        
        
           // Function: has_coverage
           //
           // Check if block has coverage model(s)
           //
           // Returns TRUE if the block abstraction class contains a coverage model
           // for all of the models specified.
           // Models are specified by adding the symbolic value of individual
           // coverage model as defined in <uvm_coverage_model_e>.
           //
           extern virtual function bit has_coverage(uvm_reg_cvr_t models);
        
        
           // Function: set_coverage
           //
           // Turns on coverage measurement.
           //
           // Turns the collection of functional coverage measurements on or off
           // for this block and all blocks, registers, fields and memories within it.
           // The functional coverage measurement is turned on for every
           // coverage model specified using <uvm_coverage_model_e> symbolic
           // identifers.
           // Multiple functional coverage models can be specified by adding
           // the functional coverage model identifiers.
           // All other functional coverage models are turned off.
           // Returns the sum of all functional
           // coverage models whose measurements were previously on.
           //
           // This method can only control the measurement of functional
           // coverage models that are present in the various abstraction classes,
           // then enabled during construction.
           // See the <uvm_reg_block::has_coverage()> method to identify
           // the available functional coverage models.
           //
           extern virtual function uvm_reg_cvr_t set_coverage(uvm_reg_cvr_t is_on);
        
        
           // Function: get_coverage
           //
           // Check if coverage measurement is on.
           //
           // Returns TRUE if measurement for all of the specified functional
           // coverage models are currently on.
           // Multiple functional coverage models can be specified by adding the
           // functional coverage model identifiers.
           //
           // See <uvm_reg_block::set_coverage()> for more details. 
           //
           extern virtual function bit get_coverage(uvm_reg_cvr_t is_on = UVM_CVR_ALL);
        
        
           // Function: sample
           //
           // Functional coverage measurement method
           //
           // This method is invoked by the block abstraction class
           // whenever an address within one of its address map
           // is succesfully read or written.
           // The specified offset is the offset within the block,
           // not an absolute address.
           //
           // Empty by default, this method may be extended by the
           // abstraction class generator to perform the required sampling
           // in any provided functional coverage model.
           //
 000250    protected virtual function void  sample(uvm_reg_addr_t offset,
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                   bit            is_read,
                                                   uvm_reg_map    map);
           endfunction
        
        
           // Function: sample_values
           //
           // Functional coverage measurement method for field values
           //
           // This method is invoked by the user
           // or by the <uvm_reg_block::sample_values()> method of the parent block
           // to trigger the sampling
           // of the current field values in the
           // block-level functional coverage model.
           // It recursively invokes the <uvm_reg_block::sample_values()>
           // and <uvm_reg::sample_values()> methods
           // in the blocks and registers in this block.
           //
           // This method may be extended by the
           // abstraction class generator to perform the required sampling
           // in any provided field-value functional coverage model.
           // If this method is extended, it MUST call super.sample_values().
           //
           extern virtual function void sample_values();
        
           /*local*/ extern function void XsampleX(uvm_reg_addr_t addr,
                                                   bit            is_read,
                                                   uvm_reg_map    map);
        
        
           //--------------
           // Group: Access
           //--------------
        
           // Function: get_default_path
           //
           // Default access path
           //
           // Returns the default access path for this block.
           //
           extern virtual function uvm_path_e get_default_path();
        
        
           // Function: reset
           //
           // Reset the mirror for this block.
           //
           // Sets the mirror value of all registers in the block and sub-blocks
           // to the reset value corresponding to the specified reset event.
           // See <uvm_reg_field::reset()> for more details.
           // Does not actually set the value of the registers in the design,
           // only the values mirrored in their corresponding mirror.
           //
           extern virtual function void reset(string kind = "HARD");
        
        
           // Function: needs_update
           //
           // Check if DUT registers need to be written
           //
           // If a mirror value has been modified in the abstraction model
           // without actually updating the actual register
           // (either through randomization or via the <uvm_reg::set()> method,
           // the mirror and state of the registers are outdated.
           // The corresponding registers in the DUT need to be updated.
           //
           // This method returns TRUE if the state of at lest one register in
           // the block or sub-blocks needs to be updated to match the mirrored
           // values.
           // The mirror values, or actual content of registers, are not modified.
           // For additional information, see <uvm_reg_block::update()> method.
           //
           extern virtual function bit needs_update();
        
        
           // Task: update
           //
           // Batch update of register.
           //
           // Using the minimum number of write operations, updates the registers
           // in the design to match the mirrored values in this block and sub-blocks.
           // The update can be performed using the physical
           // interfaces (front-door access) or back-door accesses.
           // This method performs the reverse operation of <uvm_reg_block::mirror()>. 
           //
           extern virtual task update(output uvm_status_e       status,
                                      input  uvm_path_e         path = UVM_DEFAULT_PATH,
                                      input  uvm_sequence_base  parent = null,
                                      input  int                prior = -1,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
        
        
           // Task: mirror
           //
           // Update the mirrored values
           //
           // Read all of the registers in this block and sub-blocks and update their
           // mirror values to match their corresponding values in the design.
           // The mirroring can be performed using the physical interfaces
           // (front-door access) or back-door accesses.
           // If the ~check~ argument is specified as <UVM_CHECK>,
           // an error message is issued if the current mirrored value
           // does not match the actual value in the design.
           // This method performs the reverse operation of <uvm_reg_block::update()>.
           // 
           extern virtual task mirror(output uvm_status_e       status,
                                      input  uvm_check_e        check = UVM_NO_CHECK,
                                      input  uvm_path_e         path  = UVM_DEFAULT_PATH,
                                      input  uvm_sequence_base  parent = null,
                                      input  int                prior = -1,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
        
        
           // Task: write_reg_by_name
           //
           // Write the named register
           //
           // Equivalent to <get_reg_by_name()> followed by <uvm_reg::write()>
           //
           extern virtual task write_reg_by_name(
                                      output uvm_status_e        status,
                                      input  string              name,
                                      input  uvm_reg_data_t      data,
                                      input  uvm_path_e     path = UVM_DEFAULT_PATH,
                                      input  uvm_reg_map         map = null,
                                      input  uvm_sequence_base   parent = null,
                                      input  int                 prior = -1,
                                      input  uvm_object          extension = null,
                                      input  string              fname = "",
                                      input  int                 lineno = 0);
        
        
           // Task: read_reg_by_name
           //
           // Read the named register
           //
           // Equivalent to <get_reg_by_name()> followed by <uvm_reg::read()>
           //
           extern virtual task read_reg_by_name(
                                      output uvm_status_e       status,
                                      input  string             name,
                                      output uvm_reg_data_t     data,
                                      input  uvm_path_e    path = UVM_DEFAULT_PATH,
                                      input  uvm_reg_map        map = null,
                                      input  uvm_sequence_base  parent = null,
                                      input  int                prior = -1,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
        
        
           // Task: write_mem_by_name
           //
           // Write the named memory
           //
           // Equivalent to <get_mem_by_name()> followed by <uvm_mem::write()>
           //
           extern virtual task write_mem_by_name(
                                      output uvm_status_e       status,
                                      input  string             name,
                                      input  uvm_reg_addr_t     offset,
                                      input  uvm_reg_data_t     data,
                                      input  uvm_path_e    path = UVM_DEFAULT_PATH,
                                      input  uvm_reg_map        map = null,
                                      input  uvm_sequence_base  parent = null,
                                      input  int                prior = -1,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
        
        
           // Task: read_mem_by_name
           //
           // Read the named memory
           //
           // Equivalent to <get_mem_by_name()> followed by <uvm_mem::read()>
           //
           extern virtual task read_mem_by_name(
                                      output uvm_status_e       status,
                                      input  string             name,
                                      input  uvm_reg_addr_t     offset,
                                      output uvm_reg_data_t     data,
                                      input  uvm_path_e    path = UVM_DEFAULT_PATH,
                                      input  uvm_reg_map        map = null,
                                      input  uvm_sequence_base  parent = null,
                                      input  int                prior = -1,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
        
        
           extern virtual task readmemh(string filename);
           extern virtual task writememh(string filename);
        
        
        
           //----------------
           // Group: Backdoor
           //----------------
        
           // Function: get_backdoor
           //
           // Get the user-defined backdoor for all registers in this block
           //
           // Return the user-defined backdoor for all register in this
           // block and all sub-blocks -- unless overriden by a backdoor set
           // in a lower-level block or in the register itself.
           //
           // If ~inherited~ is TRUE, returns the backdoor of the parent block
           // if none have been specified for this block.
           //
           extern function uvm_reg_backdoor get_backdoor(bit inherited = 1);
        
        
           // Function: set_backdoor
           //
           // Set the user-defined backdoor for all registers in this block
           //
           // Defines the backdoor mechanism for all registers instantiated
           // in this block and sub-blocks, unless overriden by a definition
           // in a lower-level block or register.
           //
           extern function void set_backdoor (uvm_reg_backdoor bkdr,
                                              string fname = "",
                                              int lineno = 0);
        
        
           // Function:  clear_hdl_path
           //
           // Delete HDL paths
           //
           // Remove any previously specified HDL path to the block instance
           // for the specified design abstraction.
           //
           extern function void clear_hdl_path (string kind = "RTL");
        
        
           // Function:  add_hdl_path
           //
           // Add an HDL path
           //
           // Add the specified HDL path to the block instance for the specified
           // design abstraction. This method may be called more than once for the
           // same design abstraction if the block is physically duplicated
           // in the design abstraction
           //
           extern function void add_hdl_path (string path, string kind = "RTL");
        
        
           // Function:   has_hdl_path
           //
           // Check if a HDL path is specified
           //
           // Returns TRUE if the block instance has a HDL path defined for the
           // specified design abstraction. If no design abstraction is specified,
           // uses the default design abstraction specified for this block or
           // the nearest block ancestor with a specified default design abstraction.
           //
           extern function bit has_hdl_path (string kind = "");
        
        
           // Function:  get_hdl_path
           //
           // Get the incremental HDL path(s)
           //
           // Returns the HDL path(s) defined for the specified design abstraction
           // in the block instance.
           // Returns only the component of the HDL paths that corresponds to
           // the block, not a full hierarchical path
           //
           // If no design asbtraction is specified, the default design abstraction
           // for this block is used.
           //
           extern function void get_hdl_path (ref string paths[$], input string kind = "");
        
        
           // Function:  get_full_hdl_path
           //
           // Get the full hierarchical HDL path(s)
           //
           // Returns the full hierarchical HDL path(s) defined for the specified
           // design abstraction in the block instance.
           // There may be more than one path returned even
           // if only one path was defined for the block instance, if any of the
           // parent components have more than one path defined for the same design
           // abstraction
           //
           // If no design asbtraction is specified, the default design abstraction
           // for each ancestor block is used to get each incremental path.
           //
           extern function void get_full_hdl_path (ref string paths[$],
                                                   input string kind = "",
                                                   string separator = ".");
        
        
           // Function: set_default_hdl_path
           //
           // Set the default design abstraction
           //
           // Set the default design abstraction for this block instance.
           //
           extern function void   set_default_hdl_path (string kind);
        
        
           // Function:  get_default_hdl_path
           //
           // Get the default design abstraction
           //
           // Returns the default design abstraction for this block instance.
           // If a default design abstraction has not been explicitly set for this
           // block instance, returns the default design absraction for the
           // nearest block ancestor.
           // Returns "" if no default design abstraction has been specified.
           //
           extern function string get_default_hdl_path ();
        
        
           // Function: set_hdl_path_root
           //
           // Specify a root HDL path
           //
           // Set the specified path as the absolute HDL path to the block instance
           // for the specified design abstraction.
           // This absolute root path is preppended to all hierarchical paths
           // under this block. The HDL path of any ancestor block is ignored.
           // This method overrides any incremental path for the
           // same design abstraction specified using <add_hdl_path>.
           //
           extern function void set_hdl_path_root (string path, string kind = "RTL");
        
        
           // Function: is_hdl_path_root
           //
           // Check if this block has an absolute path
           //
           // Returns TRUE if an absolute HDL path to the block instance
           // for the specified design abstraction has been defined.
           // If no design asbtraction is specified, the default design abstraction
           // for this block is used.
           //
           extern function bit is_hdl_path_root (string kind = "");
        
        
           extern virtual function void   do_print      (uvm_printer printer);
           extern virtual function void   do_copy       (uvm_object rhs);
           extern virtual function bit    do_compare    (uvm_object  rhs,
                                                         uvm_comparer comparer);
           extern virtual function void   do_pack       (uvm_packer packer);
           extern virtual function void   do_unpack     (uvm_packer packer);
           extern virtual function string convert2string ();
           extern virtual function uvm_object clone();
           
           extern local function void Xinit_address_mapsX();
        
        endclass: uvm_reg_block
        
        //------------------------------------------------------------------------
        
        
        //---------------
        // Initialization
        //---------------
        
        // check_data_width
        
%000000 function bit uvm_reg_block::check_data_width(int unsigned width);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (width <= $bits(uvm_reg_data_t)) return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    `uvm_fatal("RegModel", $sformatf("Register model requires that UVM_REG_DATA_WIDTH be defined as %0d or greater. Currently defined as %0d", width, `UVM_REG_DATA_WIDTH))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // new
        
%000001 function uvm_reg_block::new(string name="", int has_coverage=UVM_NO_COVERAGE);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001    super.new(name);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001    hdl_paths_pool = new("hdl_paths");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001    this.has_cover = has_coverage;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           // Root block until registered with a parent
%000001    m_roots[this] = 0;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: new
        
        
        // configure
        
%000000 function void uvm_reg_block::configure(uvm_reg_block parent=null, string hdl_path="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   this.parent = parent; 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   if (parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     this.parent.add_block(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   add_hdl_path(hdl_path);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   uvm_resource_db#(uvm_reg_block)::set("uvm_reg::*", get_full_name(), this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // add_block
        
%000000 function void uvm_reg_block::add_block (uvm_reg_block blk);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (this.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       `uvm_error("RegModel", "Cannot add subblock to locked block model");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
%000000    if (this.blks.exists(blk)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              `uvm_error("RegModel", {"Subblock '",blk.get_name(),
%000000          "' has already been registered with block '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
%000000    blks[blk] = id++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (m_roots.exists(blk)) m_roots.delete(blk);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // add_reg
        
%000004 function void uvm_reg_block::add_reg(uvm_reg rg);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000004    if (this.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       `uvm_error("RegModel", "Cannot add register to locked block model");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000004    if (this.regs.exists(rg)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              `uvm_error("RegModel", {"Register '",rg.get_name(),
%000000          "' has already been registered with block '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000004    regs[rg] = id++;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: add_reg
        
        
        // add_vreg
        
%000000 function void uvm_reg_block::add_vreg(uvm_vreg vreg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (this.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       `uvm_error("RegModel", "Cannot add virtual register to locked block model");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    if (this.vregs.exists(vreg)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              `uvm_error("RegModel", {"Virtual register '",vreg.get_name(),
%000000          "' has already been registered with block '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
%000000    vregs[vreg] = id++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: add_vreg
        
        
        // add_mem
        
%000000 function void uvm_reg_block::add_mem(uvm_mem mem);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (this.is_locked()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       `uvm_error("RegModel", "Cannot add memory to locked block model");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    if (this.mems.exists(mem)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              `uvm_error("RegModel", {"Memory '",mem.get_name(),
%000000          "' has already been registered with block '",get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
%000000    mems[mem] = id++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: add_mem
        
        
        // set_parent
        
%000000 function void uvm_reg_block::set_parent(uvm_reg_block parent);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   if (this != parent)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     this.parent = parent;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // is_locked
        
 000605 function bit uvm_reg_block::is_locked();
+000605  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
 000605    return this.locked;
+000605  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: is_locked
        
        
        // lock_model
        
%000001 function void uvm_reg_block::lock_model();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001    if (is_locked())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001    locked = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000004    foreach (regs[rg_]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000004       uvm_reg rg = rg_;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000004       rg.Xlock_modelX();
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000001    foreach (mems[mem_]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_mem mem = mem_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       mem.Xlock_modelX();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000001    foreach (blks[blk_]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk=blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blk.lock_model();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000001    if (this.parent == null) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001       int max_size = uvm_reg::get_max_size();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001       if (uvm_reg_field::get_max_size() > max_size)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          max_size = uvm_reg_field::get_max_size();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001       if (uvm_mem::get_max_size() > max_size)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          max_size = uvm_mem::get_max_size();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001       if (max_size > `UVM_REG_DATA_WIDTH) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          `uvm_fatal("RegModel", $sformatf("Register model requires that UVM_REG_DATA_WIDTH be defined as %0d or greater. Currently defined as %0d", max_size, `UVM_REG_DATA_WIDTH))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              end
        
%000001       Xinit_address_mapsX();
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
              // Check that root register models have unique names
        
              // Has this name has been checked before?
%000001       if (m_roots[this] != 1) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001          int n;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001          foreach (m_roots[_blk]) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001             uvm_reg_block blk = _blk;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001             if (blk.get_name() == get_name()) begin
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001                m_roots[blk] = 1;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001                n++;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
                    end
                 end
        
%000001          if (n > 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
                    `uvm_error("UVM/REG/DUPLROOT",
                               $sformatf("There are %0d root register models named \"%s\". The names of the root register models have to be unique",
%000000                                  n, get_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
                 end
              end
           end
        
        endfunction: lock_model
        
        
        
        //--------------------------
        // Get Hierarchical Elements
        //--------------------------
        
 000501 function string uvm_reg_block::get_full_name();
+000501  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (parent == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      return get_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
 000501    return {parent.get_full_name(), ".", get_name()};
+000501  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction: get_full_name
        
        
        // get_fields
        
%000000 function void uvm_reg_block::get_fields(ref uvm_reg_field fields[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                                         input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (regs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      rg.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
           
%000000    if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      foreach (blks[blk_])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        blk.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
             end
        
        endfunction: get_fields
        
        
        // get_virtual_fields
        
%000000 function void uvm_reg_block::get_virtual_fields(ref uvm_vreg_field fields[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                                                 input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (vregs[vreg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_vreg vreg = vreg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      vreg.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
           
%000000    if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      foreach (blks[blk_]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        blk.get_virtual_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
             end
        endfunction: get_virtual_fields
        
        
        // get_registers
        
%000000 function void uvm_reg_block::get_registers(ref uvm_reg regs[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                                            input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    foreach (this.regs[rg])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      regs.push_back(rg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      foreach (blks[blk_]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        blk.get_registers(regs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
             end
        endfunction: get_registers
        
        
        // get_virtual_registers
        
%000000 function void uvm_reg_block::get_virtual_registers(ref uvm_vreg regs[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                                                    input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (vregs[rg])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      regs.push_back(rg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      foreach (blks[blk_]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        blk.get_virtual_registers(regs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
             end
        endfunction: get_virtual_registers
        
        
        // get_memories
        
%000000 function void uvm_reg_block::get_memories(ref uvm_mem mems[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                                           input uvm_hier_e hier=UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (this.mems[mem_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_mem mem = mem_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      mems.push_back(mem);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      foreach (blks[blk_]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        blk.get_memories(mems);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
             end
        
        endfunction: get_memories
        
        
        // get_blocks
        
%000000 function void uvm_reg_block::get_blocks(ref uvm_reg_block blks[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                                         input uvm_hier_e hier=UVM_HIER);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (this.blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      blks.push_back(blk);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      if (hier == UVM_HIER)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        blk.get_blocks(blks);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
        endfunction: get_blocks
        
        
        // get_root_blocks
        
%000000 function void uvm_reg_block::get_root_blocks(ref uvm_reg_block blks[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (m_roots[blk]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blks.push_back(blk);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
        endfunction: get_root_blocks
        
        
        // find_blocks
        
%000000 function int uvm_reg_block::find_blocks(input string        name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                ref   uvm_reg_block blks[$],
                                                input uvm_reg_block root = null,
                                                input uvm_object    accessor = null);
        
%000000    uvm_resource_pool rpl = uvm_resource_pool::get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    uvm_resource_types::rsrc_q_t rs;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    blks.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (root != null) name = {root.get_full_name(), ".", name};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    rs = rpl.lookup_regex(name, "uvm_reg::");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    for (int i = 0; i < rs.size(); i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_resource#(uvm_reg_block) blk;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       if (!$cast(blk, rs.get(i))) continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blks.push_back(blk.read(accessor));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
           
%000000    return blks.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // find_blocks
        
%000000 function uvm_reg_block uvm_reg_block::find_block(input string        name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                         input uvm_reg_block root = null,
                                                         input uvm_object    accessor = null);
        
%000000    uvm_reg_block blks[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (!find_blocks(name, blks, root, accessor))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (blks.size() > 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              `uvm_warning("MRTH1BLK",
%000000                    {"More than one block matched the name \"", name, "\"."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
           
        
%000000    return blks[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // get_maps
        
%000000 function void uvm_reg_block::get_maps(ref uvm_reg_map maps[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (this.maps[map])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      maps.push_back(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction
        
        
        // get_parent
        
%000000 function uvm_reg_block uvm_reg_block::get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    get_parent = this.parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: get_parent
        
        
        //------------
        // Get-By-Name
        //------------
        
        // get_block_by_name
        
%000000 function uvm_reg_block uvm_reg_block::get_block_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      return this;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000      if (blk.get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return blk;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block subblks[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blk_.get_blocks(subblks, UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       foreach (subblks[j])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          if (subblks[j].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             return subblks[j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
           `uvm_warning("RegModel", {"Unable to locate block '",name,
%000000                 "' in block '",get_full_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction: get_block_by_name
        
        
        // get_reg_by_name
        
%000000 function uvm_reg uvm_reg_block::get_reg_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (regs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      if (rg.get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return rg;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg subregs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blk_.get_registers(subregs, UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       foreach (subregs[j])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          if (subregs[j].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             return subregs[j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
           `uvm_warning("RegModel", {"Unable to locate register '",name,
%000000                 "' in block '",get_full_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction: get_reg_by_name
        
        
        // get_vreg_by_name
        
%000000 function uvm_vreg uvm_reg_block::get_vreg_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (vregs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_vreg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      if (rg.get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return rg;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_vreg subvregs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blk_.get_virtual_registers(subvregs, UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       foreach (subvregs[j])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          if (subvregs[j].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             return subvregs[j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
           `uvm_warning("RegModel", {"Unable to locate virtual register '",name,
%000000                 "' in block '",get_full_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction: get_vreg_by_name
        
        
        // get_mem_by_name
        
%000000 function uvm_mem uvm_reg_block::get_mem_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (mems[mem_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_mem mem = mem_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      if (mem.get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return mem;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_mem submems[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blk_.get_memories(submems, UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       foreach (submems[j])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          if (submems[j].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             return submems[j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
           `uvm_warning("RegModel", {"Unable to locate memory '",name,
%000000                 "' in block '",get_full_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction: get_mem_by_name
        
        
        // get_field_by_name
        
%000000 function uvm_reg_field uvm_reg_block::get_field_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (regs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       rg.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       foreach (fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000         if (fields[i].get_name() == name)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000           return fields[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg subregs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blk_.get_registers(subregs, UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       foreach (subregs[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          subregs[j].get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          foreach (fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             if (fields[i].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                return fields[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
              end
           end
        
           `uvm_warning("RegModel", {"Unable to locate field '",name,
%000000                 "' in block '",get_full_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction: get_field_by_name
        
        
        // get_vfield_by_name
        
%000000 function uvm_vreg_field uvm_reg_block::get_vfield_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (vregs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_vreg rg =rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_vreg_field fields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       rg.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       foreach (fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000         if (fields[i].get_name() == name)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000           return fields[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_vreg subvregs[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blk_.get_virtual_registers(subvregs, UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       foreach (subvregs[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          uvm_vreg_field fields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          subvregs[j].get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          foreach (fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             if (fields[i].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                return fields[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
              end
           end
        
           `uvm_warning("RegModel", {"Unable to locate virtual field '",name,
%000000                 "' in block '",get_full_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction: get_vfield_by_name
        
        
        
        //-------------
        // Coverage API
        //-------------
        
        // set_coverage
        
%000000 function uvm_reg_cvr_t uvm_reg_block::set_coverage(uvm_reg_cvr_t is_on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.cover_on = this.has_cover & is_on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (regs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      void'(rg.set_coverage(is_on));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (mems[mem_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_mem mem = mem_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      void'(mem.set_coverage(is_on));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      void'(blk.set_coverage(is_on));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    return this.cover_on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: set_coverage
        
        
        // sample_values
        
%000000 function void uvm_reg_block::sample_values();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    foreach (regs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       rg.sample_values();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       blk.sample_values();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        endfunction
        
        
        // XsampleX
        
 000250 function void uvm_reg_block::XsampleX(uvm_reg_addr_t addr,
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                              bit            is_read,
                                              uvm_reg_map    map);
 000250    sample(addr, is_read, map);
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
~000250    if (parent != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              // ToDo: Call XsampleX in the parent block
              //       with the offset and map within that block's context
           end
        endfunction
        
        
%000000 function uvm_reg_cvr_t uvm_reg_block::build_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    build_coverage = UVM_NO_COVERAGE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    void'(uvm_reg_cvr_rsrc_db::read_by_name({"uvm_reg::", get_full_name()},
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                                            "include_coverage",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                                            build_coverage, this));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    return build_coverage & models;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: build_coverage
        
        
        // add_coverage
        
%000000 function void uvm_reg_block::add_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.has_cover |= models;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: add_coverage
        
        
        // has_coverage
        
%000000 function bit uvm_reg_block::has_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    return ((this.has_cover & models) == models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: has_coverage
        
        
        // get_coverage
        
%000000 function bit uvm_reg_block::get_coverage(uvm_reg_cvr_t is_on = UVM_CVR_ALL);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (this.has_coverage(is_on) == 0) return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    return ((this.cover_on & is_on) == is_on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: get_coverage
        
        
        //----------------
        // Run-Time Access
        //----------------
        
        
        // reset
        
%000001 function void uvm_reg_block::reset(string kind = "HARD");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000004    foreach (regs[rg_]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000004      uvm_reg rg = rg_;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000004      rg.reset(kind);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000001    foreach (blks[blk_]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      blk.reset(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        endfunction
        
        
        // needs_update
        
%000000 function bit uvm_reg_block::needs_update();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    needs_update = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (regs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      if (rg.needs_update())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_block blk =blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      if (blk.needs_update())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        endfunction: needs_update
        
        
        // update
        
%000000 task uvm_reg_block::update(output uvm_status_e  status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                   input  uvm_path_e    path = UVM_DEFAULT_PATH,
                                   input  uvm_sequence_base  parent = null,
                                   input  int                prior = -1,
                                   input  uvm_object         extension = null,
                                   input  string             fname = "",
                                   input  int                lineno = 0);
%000000    status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (!needs_update()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=(needs_update()==0) => 1 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=(needs_update()==1) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
             `uvm_info("RegModel", $sformatf("%s:%0d - RegModel block %s does not need updating",
%000000                     fname, lineno, this.get_name()), UVM_HIGH);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
           
           `uvm_info("RegModel", $sformatf("%s:%0d - Updating model block %s with %s path",
%000000                     fname, lineno, this.get_name(), path.name ), UVM_HIGH);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (regs[rg_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       if (rg.needs_update()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          rg.update(status, path, null, parent, prior, extension);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          if (status != UVM_IS_OK && status != UVM_HAS_X) begin;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=((status != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=((status != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=((status != uvm_pkg::UVM_IS_OK)==1 && (status != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_reg_block__Vclpkg
                   `uvm_error("RegModel", $sformatf("Register \"%s\" could not be updated",
%000000                                         rg.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000            return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
                 end
              end
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      blk.update(status,path,parent,prior,extension,fname,lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        endtask: update
        
        
        // mirror
        
%000000 task uvm_reg_block::mirror(output uvm_status_e       status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                   input  uvm_check_e        check = UVM_NO_CHECK,
                                   input  uvm_path_e         path = UVM_DEFAULT_PATH,
                                   input  uvm_sequence_base  parent = null,
                                   input  int                prior = -1,
                                   input  uvm_object         extension = null,
                                   input  string             fname = "",
                                   input  int                lineno = 0);
%000000    uvm_status_e final_status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (regs[rg_]) begin 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg rg = rg_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       rg.mirror(status, check, path, null,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                 parent, prior, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       if (status != UVM_IS_OK && status != UVM_HAS_X) begin;
-000000  point: type=expr comment=((status != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=((status != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=((status != uvm_pkg::UVM_IS_OK)==1 && (status != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          final_status = status;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
              end
           end
        
%000000    foreach (blks[blk_]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_block blk = blk_;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       blk.mirror(status, check, path, parent, prior, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       if (status != UVM_IS_OK && status != UVM_HAS_X) begin;
-000000  point: type=expr comment=((status != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=((status != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=((status != uvm_pkg::UVM_IS_OK)==1 && (status != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          final_status = status;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
              end
           end
           
        endtask: mirror
        
        
        // write_reg_by_name
        
%000000 task uvm_reg_block::write_reg_by_name(output uvm_status_e   status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                              input  string              name,
                                              input  uvm_reg_data_t      data,
                                              input  uvm_path_e     path = UVM_DEFAULT_PATH,
                                              input  uvm_reg_map      map = null,
                                              input  uvm_sequence_base   parent = null,
                                              input  int                 prior = -1,
                                              input  uvm_object          extension = null,
                                              input  string              fname = "",
                                              input  int                 lineno = 0);
%000000    uvm_reg rg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    rg = this.get_reg_by_name(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (rg != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      rg.write(status, data, path, map, parent, prior, extension);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endtask: write_reg_by_name
        
        
        // read_reg_by_name
        
%000000 task uvm_reg_block::read_reg_by_name(output uvm_status_e  status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                             input  string             name,
%000000                                      output uvm_reg_data_t     data,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                             input  uvm_path_e    path = UVM_DEFAULT_PATH,
                                             input  uvm_reg_map     map = null,
                                             input  uvm_sequence_base  parent = null,
                                             input  int                prior = -1,
                                             input  uvm_object         extension = null,
                                             input  string             fname = "",
                                             input  int                lineno = 0);
%000000    uvm_reg rg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    rg = this.get_reg_by_name(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (rg != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      rg.read(status, data, path, map, parent, prior, extension);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        endtask: read_reg_by_name
        
        
        // write_mem_by_name
        
%000000 task uvm_reg_block::write_mem_by_name(output uvm_status_e  status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                  input  string             name,
                                                  input  uvm_reg_addr_t     offset,
                                                  input  uvm_reg_data_t     data,
                                                  input  uvm_path_e    path = UVM_DEFAULT_PATH,
                                                  input  uvm_reg_map     map = null,
                                                  input  uvm_sequence_base  parent = null,
                                                  input  int                prior = -1,
                                                  input  uvm_object         extension = null,
                                                  input  string             fname = "",
                                                  input  int                lineno = 0);
%000000    uvm_mem mem;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    mem = get_mem_by_name(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (mem != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      mem.write(status, offset, data, path, map, parent, prior, extension);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        endtask: write_mem_by_name
        
        
        // read_mem_by_name
        
%000000 task uvm_reg_block::read_mem_by_name(output uvm_status_e  status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                 input  string             name,
                                                 input  uvm_reg_addr_t     offset,
%000000                                          output uvm_reg_data_t     data,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                 input  uvm_path_e    path = UVM_DEFAULT_PATH,
                                                 input  uvm_reg_map     map = null,
                                                 input  uvm_sequence_base  parent = null,
                                                 input  int                prior = -1,
                                                 input  uvm_object         extension = null,
                                                 input  string             fname = "",
                                                 input  int                lineno = 0);
%000000    uvm_mem mem;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    this.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    mem = get_mem_by_name(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (mem != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      mem.read(status, offset, data, path, map, parent, prior, extension);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        endtask: read_mem_by_name
        
        
        // readmemh
        
%000000 task uvm_reg_block::readmemh(string filename);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           // TODO
        endtask: readmemh
        
        
        // writememh
        
%000000 task uvm_reg_block::writememh(string filename);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           // TODO
        endtask: writememh
        
        
        //---------------
        // Map Management
        //---------------
        
        // create_map
        
%000001 function uvm_reg_map uvm_reg_block::create_map(string name,
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                       uvm_reg_addr_t base_addr,
                                                       int unsigned n_bytes,
                                                       uvm_endianness_e endian,
                                                       bit byte_addressing=1);
        
%000001    uvm_reg_map  map;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001    if (this.locked) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       `uvm_error("RegModel", "Cannot add map to locked model");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000001    map = uvm_reg_map::type_id::create(name,,this.get_full_name());
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001    map.configure(this,base_addr,n_bytes,endian,byte_addressing);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001    this.maps[map] = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001    if (maps.num() == 1)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001      default_map = map;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000001    return map;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // add_map
        
%000000 function void uvm_reg_block::add_map(uvm_reg_map map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (this.locked) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       `uvm_error("RegModel", "Cannot add map to locked model");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    if (this.maps.exists(map)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              `uvm_error("RegModel", {"Map '",map.get_name(),
%000000                  "' already exists in '",get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    this.maps[map] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (maps.num() == 1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      default_map = map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction: add_map
        
        
        // get_map_by_name
        
%000000 function uvm_reg_map uvm_reg_block::get_map_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    uvm_reg_map maps[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    this.get_maps(maps);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (maps[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      if (maps[i].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        return maps[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    foreach (maps[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_reg_map submaps[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       maps[i].get_submaps(submaps, UVM_HIER);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       foreach (submaps[j])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          if (submaps[j].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             return submaps[j];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
              
        
%000000    `uvm_warning("RegModel", {"Map with name '",name,"' does not exist in block"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // set_default_map
        
%000000 function void uvm_reg_block::set_default_map(uvm_reg_map map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   if (!maps.exists(map))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    `uvm_warning("RegModel", {"Map '",map.get_full_name(),"' does not exist in block"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   default_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // get_default_map
        
%000000 function uvm_reg_map uvm_reg_block::get_default_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   return default_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // get_default_path
        
%000000 function uvm_path_e uvm_reg_block::get_default_path();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (this.default_path != UVM_DEFAULT_PATH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return this.default_path;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    if (this.parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return this.parent.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    return UVM_FRONTDOOR;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction
        
        
        // Xinit_address_mapsX
        
%000001 function void uvm_reg_block::Xinit_address_mapsX();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001    foreach (maps[map_]) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001       uvm_reg_map map = map_;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000001       map.Xinit_address_mapX();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
              //map.Xverify_map_configX();
        endfunction
        
        
        //----------------
        // Group- Backdoor
        //----------------
        
        // set_backdoor
        
%000000 function void uvm_reg_block::set_backdoor(uvm_reg_backdoor bkdr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                  string               fname = "",
                                                  int                  lineno = 0);
%000000    bkdr.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    bkdr.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (this.backdoor != null &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        this.backdoor.has_update_threads()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       `uvm_warning("RegModel", "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts.");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
%000000    this.backdoor = bkdr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: set_backdoor
        
        
        // get_backdoor
        
%000000 function uvm_reg_backdoor uvm_reg_block::get_backdoor(bit inherited = 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (backdoor == null && inherited) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_block blk = get_parent();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      while (blk != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        uvm_reg_backdoor bkdr = blk.get_backdoor();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          return bkdr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000        blk = blk.get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
             end
           end
%000000    return this.backdoor;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: get_backdoor
        
        
        
        // clear_hdl_path
        
%000000 function void uvm_reg_block::clear_hdl_path(string kind = "RTL");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   if (kind == "ALL") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     hdl_paths_pool = new("hdl_paths");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
        
%000000   if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     kind = get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   if (!hdl_paths_pool.exists(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     `uvm_warning("RegModel",{"Unknown HDL Abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
        
%000000   hdl_paths_pool.delete(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // add_hdl_path
        
%000000 function void uvm_reg_block::add_hdl_path(string path, string kind = "RTL");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   uvm_queue #(string) paths;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   paths = hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   paths.push_back(path);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction
        
        
        // has_hdl_path
        
%000000 function bit  uvm_reg_block::has_hdl_path(string kind = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     kind = get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
%000000   return hdl_paths_pool.exists(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // get_hdl_path
        
%000000 function void uvm_reg_block::get_hdl_path(ref string paths[$], input string kind = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   uvm_queue #(string) hdl_paths;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     kind = get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   if (!has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==0) => 1 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==1) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     `uvm_error("RegModel",{"Block does not have hdl path defined for abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
        
%000000   hdl_paths = hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   for (int i=0; i<hdl_paths.size();i++)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     paths.push_back(hdl_paths.get(i));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        endfunction
        
        
        // get_full_hdl_path
        
%000000 function void uvm_reg_block::get_full_hdl_path(ref string paths[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                       input string kind = "",
                                                       string separator = ".");
        
%000000    if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       kind = get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000    paths.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    if (is_hdl_path_root(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       if (root_hdl_paths[kind] != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          paths.push_back(root_hdl_paths[kind]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
        
%000000    if (!has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==0) => 1 hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==1) => 0 hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       `uvm_error("RegModel",{"Block does not have hdl path defined for abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
           end
           
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       uvm_queue #(string) hdl_paths = hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000       string parent_paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       if (parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          parent.get_full_hdl_path(parent_paths, kind, separator);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000       for (int i=0; i<hdl_paths.size();i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000          string hdl_path = hdl_paths.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000          if (parent_paths.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             if (hdl_path != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                paths.push_back(hdl_path);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000             continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
                 end
                 
%000000          foreach (parent_paths[j])  begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000             if (hdl_path == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000                paths.push_back(parent_paths[j]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
                    else
%000000                paths.push_back({ parent_paths[j], separator, hdl_path });
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
                 end
              end
           end
          
        endfunction
        
        
        // get_default_hdl_path
        
%000000 function string uvm_reg_block::get_default_hdl_path();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   if (default_hdl_path == "" && parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     return parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   return default_hdl_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // set_default_hdl_path
        
%000000 function void uvm_reg_block::set_default_hdl_path(string kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     if (parent == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
              `uvm_error("RegModel",{"Block has no parent. ",
%000000            "Must specify a valid HDL abstraction (kind)"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
            end
%000000     kind = parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
        
%000000   default_hdl_path = kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // set_hdl_path_root
        
%000000 function void uvm_reg_block::set_hdl_path_root (string path, string kind = "RTL");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     kind = get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   root_hdl_paths[kind] = path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // is_hdl_path_root
        
%000000 function bit  uvm_reg_block::is_hdl_path_root (string kind = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000     kind = get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   return root_hdl_paths.exists(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        //----------------------------------
        // Group- Basic Object Operations
        //----------------------------------
        
        // do_print
%000000 function void uvm_reg_block::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
%000000   foreach(blks[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_block b = i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_object obj = b;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      printer.print_object(obj.get_name(), obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
           
%000000   foreach(regs[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg r = i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_object obj = r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      printer.print_object(obj.get_name(), obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
        
%000000   foreach(vregs[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_vreg r = i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_object obj = r;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      printer.print_object(obj.get_name(), obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
        
%000000   foreach(mems[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_mem m = i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_object obj = m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      printer.print_object(obj.get_name(), obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
        
%000000   foreach(maps[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_reg_map m = i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      uvm_object obj = m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000      printer.print_object(obj.get_name(), obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
          end
          
        endfunction
        
        
        
        // clone
        
%000000 function uvm_object uvm_reg_block::clone();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel blocks cannot be cloned")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        // do_copy
        
%000000 function void uvm_reg_block::do_copy(uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel blocks cannot be copied")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // do_compare
        
%000000 function bit uvm_reg_block::do_compare (uvm_object  rhs,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
                                                uvm_comparer comparer);
%000000   `uvm_warning("RegModel","RegModel blocks cannot be compared")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // do_pack
        
%000000 function void uvm_reg_block::do_pack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   `uvm_warning("RegModel","RegModel blocks cannot be packed")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // do_unpack
        
%000000 function void uvm_reg_block::do_unpack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000   `uvm_warning("RegModel","RegModel blocks cannot be unpacked")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_block__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction
        
        
        // convert2string
        
%000000 function string uvm_reg_block::convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    string image;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    string maps[];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    string blk_maps[];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    bit         single_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    uvm_endianness_e endian;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
%000000    string prefix = "  ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        
        `ifdef TODO
           single_map = 1;
           if (map == "") begin
              this.get_maps(maps);
              if (maps.size() > 1) single_map = 0;
           end
        
           if (single_map) begin
              $sformat(image, "%sBlock %s", prefix, this.get_full_name());
        
              if (map != "")
                $sformat(image, "%s.%s", image, map);
        
              endian = this.get_endian(map);
        
              $sformat(image, "%s -- %0d bytes (%s)", image,
                       this.get_n_bytes(map), endian.name());
        
              foreach (blks[i]) begin
                 string img;
                 img = blks[i].convert2string({prefix, "   "}, blk_maps[i]);
                 image = {image, "\n", img};
              end
        
           end
           else begin
              $sformat(image, "%Block %s", prefix, this.get_full_name());
              foreach (maps[i]) begin
                 string img;
                 endian = this.get_endian(maps[i]);
                 $sformat(img, "%s   Map \"%s\" -- %0d bytes (%s)",
                          prefix, maps[i],
                          this.get_n_bytes(maps[i]), endian.name());
                 image = {image, "\n", img};
        
                 this.get_blocks(blks, blk_maps, maps[i]);
                 foreach (blks[j]) begin
                    img = blks[j].convert2string({prefix, "      "},
                                            blk_maps[j]);
                    image = {image, "\n", img};
                 end
        
                 this.get_subsys(sys, blk_maps, maps[i]);
                 foreach (sys[j]) begin
                    img = sys[j].convert2string({prefix, "      "},
                                           blk_maps[j]);
                    image = {image, "\n", img};
                 end
              end
           end
        `endif
%000000    return image;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_block__Vclpkg
        endfunction: convert2string
        
        
        
        
