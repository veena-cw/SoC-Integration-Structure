//      // verilator_coverage annotation
        //
        // -------------------------------------------------------------
        //    Copyright 2004-2009 Synopsys, Inc.
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
        
        
        //------------------------------------------------------------------------------
        // CLASS: uvm_mem
        //------------------------------------------------------------------------------
        // Memory abstraction base class
        //
        // A memory is a collection of contiguous locations.
        // A memory may be accessible via more than one address map.
        //
        // Unlike registers, memories are not mirrored because of the potentially
        // large data space: tests that walk the entire memory space would negate
        // any benefit from sparse memory modelling techniques.
        // Rather than relying on a mirror, it is recommended that
        // backdoor access be used instead.
        //
        //------------------------------------------------------------------------------
        
        class uvm_mem extends uvm_object;
        
           typedef enum {UNKNOWNS, ZEROES, ONES, ADDRESS, VALUE, INCR, DECR} init_e;
        
           local bit               m_locked;
           local bit               m_read_in_progress;
           local bit               m_write_in_progress;
           local string            m_access;
           local longint unsigned  m_size;
           local uvm_reg_block     m_parent;
           local bit               m_maps[uvm_reg_map];
           local int unsigned      m_n_bits;
           local uvm_reg_backdoor  m_backdoor;
           local bit               m_is_powered_down;
           local int               m_has_cover;
           local int               m_cover_on;
           local string            m_fname;
           local int               m_lineno;
           local bit               m_vregs[uvm_vreg];
           local uvm_object_string_pool
                       #(uvm_queue #(uvm_hdl_path_concat)) m_hdl_paths_pool;
        
           local static int unsigned  m_max_size;
        
           //----------------------
           // Group: Initialization
           //----------------------
        
           // Function: new
           //
           // Create a new instance and type-specific configuration
           //
           // Creates an instance of a memory abstraction class with the specified
           // name.
           //
           // ~size~ specifies the total number of memory locations.
           // ~n_bits~ specifies the total number of bits in each memory location.
           // ~access~ specifies the access policy of this memory and may be
           // one of "RW for RAMs and "RO" for ROMs.
           //
           // ~has_coverage~ specifies which functional coverage models are present in
           // the extension of the register abstraction class.
           // Multiple functional coverage models may be specified by adding their
           // symbolic names, as defined by the <uvm_coverage_model_e> type.
           //
           extern function new (string           name,
                                longint unsigned size,
                                int unsigned     n_bits,
                                string           access = "RW",
                                int              has_coverage = UVM_NO_COVERAGE);
        
           
           // Function: configure
           //
           // Instance-specific configuration
           //
           // Specify the parent block of this memory.
           //
           // If this memory is implemented in a single HDL variable,
           // it's name is specified as the ~hdl_path~.
           // Otherwise, if the memory is implemented as a concatenation
           // of variables (usually one per bank), then the HDL path
           // must be specified using the <add_hdl_path()> or
           // <add_hdl_path_slice()> method.
           //
           extern function void configure (uvm_reg_block parent,
                                           string        hdl_path = "");
        
           
           // Function: set_offset
           //
           // Modify the offset of the memory
           //
           // The offset of a memory within an address map is set using the
           // <uvm_reg_map::add_mem()> method.
           // This method is used to modify that offset dynamically.
           //
           // Note: Modifying the offset of a memory will make the abstract model
           // diverge from the specification that was used to create it.
           //
           extern virtual function void set_offset (uvm_reg_map    map,
                                                    uvm_reg_addr_t offset,
                                                    bit            unmapped = 0);
        
        
           /*local*/ extern virtual function void set_parent(uvm_reg_block parent);
           /*local*/ extern function void add_map(uvm_reg_map map);
           /*local*/ extern function void Xlock_modelX();
           /*local*/ extern function void Xadd_vregX(uvm_vreg vreg);
           /*local*/ extern function void Xdelete_vregX(uvm_vreg vreg);
        
        
           // variable: mam
           //
           // Memory allocation manager
           //
           // Memory allocation manager for the memory corresponding to this
           // abstraction class instance.
           // Can be used to allocate regions of consecutive addresses of
           // specific sizes, such as DMA buffers,
           // or to locate virtual register array.
           //
           uvm_mem_mam mam;
        
        
           //---------------------
           // Group: Introspection
           //---------------------
        
           // Function: get_name
           //
           // Get the simple name
           //
           // Return the simple object name of this memory.
           //
        
           // Function: get_full_name
           //
           // Get the hierarchical name
           //
           // Return the hierarchal name of this memory.
           // The base of the hierarchical name is the root block.
           //
           extern virtual function string get_full_name();
        
        
           // Function: get_parent
           //
           // Get the parent block
           //
           extern virtual function uvm_reg_block get_parent ();
           extern virtual function uvm_reg_block get_block  ();
        
        
           // Function: get_n_maps
           //
           // Returns the number of address maps this memory is mapped in
           //
           extern virtual function int get_n_maps ();
        
        
           // Function: is_in_map
           //
           // Return TRUE if this memory is in the specified address ~map~
           //
           extern function bit is_in_map (uvm_reg_map map);
        
        
           // Function: get_maps
           //
           // Returns all of the address ~maps~ where this memory is mapped
           //
           extern virtual function void get_maps (ref uvm_reg_map maps[$]);
        
        
           /*local*/ extern function uvm_reg_map get_local_map   (uvm_reg_map map,
                                                                  string caller = "");
        
           /*local*/ extern function uvm_reg_map get_default_map (string caller = "");
        
        
           // Function: get_rights
           //
           // Returns the access rights of this memory.
           //
           // Returns "RW", "RO" or "WO".
           // The access rights of a memory is always "RW",
           // unless it is a shared memory
           // with access restriction in a particular address map.
           //
           // If no address map is specified and the memory is mapped in only one
           // address map, that address map is used. If the memory is mapped
           // in more than one address map, the default address map of the
           // parent block is used.
           //
           // If an address map is specified and
           // the memory is not mapped in the specified
           // address map, an error message is issued
           // and "RW" is returned. 
           //
           extern virtual function string get_rights (uvm_reg_map map = null);
        
        
           // Function: get_access
           //
           // Returns the access policy of the memory when written and read
           // via an address map.
           //
           // If the memory is mapped in more than one address map,
           // an address ~map~ must be specified.
           // If access restrictions are present when accessing a memory
           // through the specified address map, the access mode returned
           // takes the access restrictions into account.
           // For example, a read-write memory accessed
           // through a domain with read-only restrictions would return "RO". 
           //
           extern virtual function string get_access(uvm_reg_map map = null);
        
        
           // Function: get_size
           //
           // Returns the number of unique memory locations in this memory. 
           //
           extern function longint unsigned get_size();
        
        
           // Function: get_n_bytes
           //
           // Return the width, in number of bytes, of each memory location
           //
           extern function int unsigned get_n_bytes();
        
        
           // Function: get_n_bits
           //
           // Returns the width, in number of bits, of each memory location
           //
           extern function int unsigned get_n_bits();
        
        
           // Function: get_max_size
           //
           // Returns the maximum width, in number of bits, of all memories
           //
           extern static function int unsigned    get_max_size();
        
        
           // Function: get_virtual_registers
           //
           // Return the virtual registers in this memory
           //
           // Fills the specified array with the abstraction class
           // for all of the virtual registers implemented in this memory.
           // The order in which the virtual registers are located in the array
           // is not specified. 
           //
           extern virtual function void get_virtual_registers(ref uvm_vreg regs[$]);
        
        
           // Function: get_virtual_fields
           //
           // Return  the virtual fields in the memory
           //
           // Fills the specified dynamic array with the abstraction class
           // for all of the virtual fields implemented in this memory.
           // The order in which the virtual fields are located in the array is
           // not specified. 
           //
           extern virtual function void get_virtual_fields(ref uvm_vreg_field fields[$]);
        
        
           // Function: get_vreg_by_name
           //
           // Find the named virtual register
           //
           // Finds a virtual register with the specified name
           // implemented in this memory and returns
           // its abstraction class instance.
           // If no virtual register with the specified name is found, returns ~null~. 
           //
           extern virtual function uvm_vreg get_vreg_by_name(string name);
        
        
           // Function: get_vfield_by_name
           //
           // Find the named virtual field
           //
           // Finds a virtual field with the specified name
           // implemented in this memory and returns
           // its abstraction class instance.
           // If no virtual field with the specified name is found, returns ~null~. 
           //
           extern virtual function uvm_vreg_field  get_vfield_by_name(string name);
        
        
           // Function: get_vreg_by_offset
           //
           // Find the virtual register implemented at the specified offset
           //
           // Finds the virtual register implemented in this memory
           // at the specified ~offset~ in the specified address ~map~
           // and returns its abstraction class instance.
           // If no virtual register at the offset is found, returns ~null~. 
           //
           extern virtual function uvm_vreg get_vreg_by_offset(uvm_reg_addr_t offset,
                                                               uvm_reg_map    map = null);
        
           
           // Function: get_offset
           //
           // Returns the base offset of a memory location
           //
           // Returns the base offset of the specified location in this memory
           // in an address ~map~.
           //
           // If no address map is specified and the memory is mapped in only one
           // address map, that address map is used. If the memory is mapped
           // in more than one address map, the default address map of the
           // parent block is used.
           //
           // If an address map is specified and
           // the memory is not mapped in the specified
           // address map, an error message is issued.
           //
           extern virtual function uvm_reg_addr_t  get_offset (uvm_reg_addr_t offset = 0,
                                                               uvm_reg_map    map = null);
        
        
           // Function: get_address
           //
           // Returns the base external physical address of a memory location
           //
           // Returns the base external physical address of the specified location
           // in this memory if accessed through the specified address ~map~.
           //
           // If no address map is specified and the memory is mapped in only one
           // address map, that address map is used. If the memory is mapped
           // in more than one address map, the default address map of the
           // parent block is used.
           //
           // If an address map is specified and
           // the memory is not mapped in the specified
           // address map, an error message is issued.
           //
           extern virtual function uvm_reg_addr_t  get_address(uvm_reg_addr_t  offset = 0,
                                                               uvm_reg_map   map = null);
        
        
           // Function: get_addresses
           //
           // Identifies the external physical address(es) of a memory location
           //
           // Computes all of the external physical addresses that must be accessed
           // to completely read or write the specified location in this memory.
           // The addressed are specified in little endian order.
           // Returns the number of bytes transfered on each access.
           //
           // If no address map is specified and the memory is mapped in only one
           // address map, that address map is used. If the memory is mapped
           // in more than one address map, the default address map of the
           // parent block is used.
           //
           // If an address map is specified and
           // the memory is not mapped in the specified
           // address map, an error message is issued.
           //
           extern virtual function int get_addresses(uvm_reg_addr_t     offset = 0,
                                                     uvm_reg_map        map=null,
                                                     ref uvm_reg_addr_t addr[]);
        
        
           //------------------
           // Group: HDL Access
           //------------------
        
           // Task: write
           //
           // Write the specified value in a memory location
           //
           // Write ~value~ in the memory location that corresponds to this
           // abstraction class instance at the specified ~offset~
           // using the specified access ~path~. 
           // If the memory is mapped in more than one address map, 
           // an address ~map~ must be
           // specified if a physical access is used (front-door access).
           // If a back-door access path is used, the effect of writing
           // the register through a physical access is mimicked. For
           // example, a read-only memory will not be written.
           //
           extern virtual task write(output uvm_status_e       status,
                                     input  uvm_reg_addr_t     offset,
                                     input  uvm_reg_data_t     value,
                                     input  uvm_path_e         path   = UVM_DEFAULT_PATH,
                                     input  uvm_reg_map        map = null,
                                     input  uvm_sequence_base  parent = null,
                                     input  int                prior = -1,
                                     input  uvm_object         extension = null,
                                     input  string             fname = "",
                                     input  int                lineno = 0);
        
        
           // Task: read
           //
           // Read the current value from a memory location
           //
           // Read and return ~value~ from the memory location that corresponds to this
           // abstraction class instance at the specified ~offset~
           // using the specified access ~path~. 
           // If the register is mapped in more than one address map, 
           // an address ~map~ must be
           // specified if a physical access is used (front-door access).
           //
           extern virtual task read(output uvm_status_e        status,
                                    input  uvm_reg_addr_t      offset,
                                    output uvm_reg_data_t      value,
                                    input  uvm_path_e          path   = UVM_DEFAULT_PATH,
                                    input  uvm_reg_map         map = null,
                                    input  uvm_sequence_base   parent = null,
                                    input  int                 prior = -1,
                                    input  uvm_object          extension = null,
                                    input  string              fname = "",
                                    input  int                 lineno = 0);
        
        
           // Task: burst_write
           //
           // Write the specified values in memory locations
           //
           // Burst-write the specified ~values~ in the memory locations
           // beginning at the specified ~offset~.
           // If the memory is mapped in more than one address map, 
           // an address ~map~ must be specified if not using the backdoor.
           // If a back-door access path is used, the effect of writing
           // the register through a physical access is mimicked. For
           // example, a read-only memory will not be written.
           //
           extern virtual task burst_write(output uvm_status_e      status,
                                           input  uvm_reg_addr_t    offset,
                                           input  uvm_reg_data_t    value[],
                                           input  uvm_path_e        path = UVM_DEFAULT_PATH,
                                           input  uvm_reg_map       map = null,
                                           input  uvm_sequence_base parent = null,
                                           input  int               prior = -1,
                                           input  uvm_object        extension = null,
                                           input  string            fname = "",
                                           input  int               lineno = 0);
        
        
           // Task: burst_read
           //
           // Read values from memory locations
           //
           // Burst-read into ~values~ the data the memory locations
           // beginning at the specified ~offset~.
           // If the memory is mapped in more than one address map, 
           // an address ~map~ must be specified if not using the backdoor.
           // If a back-door access path is used, the effect of writing
           // the register through a physical access is mimicked. For
           // example, a read-only memory will not be written.
           //
           extern virtual task burst_read(output uvm_status_e      status,
                                          input  uvm_reg_addr_t    offset,
                                          ref    uvm_reg_data_t    value[],
                                          input  uvm_path_e        path = UVM_DEFAULT_PATH,
                                          input  uvm_reg_map       map = null,
                                          input  uvm_sequence_base parent = null,
                                          input  int               prior = -1,
                                          input  uvm_object        extension = null,
                                          input  string            fname = "",
                                          input  int               lineno = 0);
        
        
           // Task: poke
           //
           // Deposit the specified value in a memory location
           //
           // Deposit the value in the DUT memory location corresponding to this
           // abstraction class instance at the secified ~offset~, as-is,
           // using a back-door access.
           //
           // Uses the HDL path for the design abstraction specified by ~kind~.
           //
           extern virtual task poke(output uvm_status_e       status,
                                    input  uvm_reg_addr_t     offset,
                                    input  uvm_reg_data_t     value,
                                    input  string             kind = "",
                                    input  uvm_sequence_base  parent = null,
                                    input  uvm_object         extension = null,
                                    input  string             fname = "",
                                    input  int                lineno = 0);
        
        
           // Task: peek
           //
           // Read the current value from a memory location
           //
           // Sample the value in the DUT memory location corresponding to this
           // absraction class instance at the specified ~offset~
           // using a back-door access.
           // The memory location value is sampled, not modified.
           //
           // Uses the HDL path for the design abstraction specified by ~kind~.
           //
           extern virtual task peek(output uvm_status_e       status,
                                    input  uvm_reg_addr_t     offset,
                                    output uvm_reg_data_t     value,
                                    input  string             kind = "",
                                    input  uvm_sequence_base  parent = null,
                                    input  uvm_object         extension = null,
                                    input  string             fname = "",
                                    input  int                lineno = 0);
        
        
        
           extern protected function bit Xcheck_accessX (input uvm_reg_item rw,
                                                         output uvm_reg_map_info map_info,
                                                         input string caller);
           
        
           extern virtual task do_write (uvm_reg_item rw);
           extern virtual task do_read  (uvm_reg_item rw);
        
        
           //-----------------
           // Group: Frontdoor
           //-----------------
        
           // Function: set_frontdoor
           //
           // Set a user-defined frontdoor for this memory
           //
           // By default, memorys are mapped linearly into the address space
           // of the address maps that instantiate them.
           // If memorys are accessed using a different mechanism,
           // a user-defined access
           // mechanism must be defined and associated with
           // the corresponding memory abstraction class
           //
           // If the memory is mapped in multiple address maps, an address ~map~
           // must be specified.
           //
           extern function void set_frontdoor(uvm_reg_frontdoor ftdr,
                                              uvm_reg_map map = null,
                                              string fname = "",
                                              int lineno = 0);
           
        
           // Function: get_frontdoor
           //
           // Returns the user-defined frontdoor for this memory
           //
           // If null, no user-defined frontdoor has been defined.
           // A user-defined frontdoor is defined
           // by using the <uvm_mem::set_frontdoor()> method. 
           //
           // If the memory is mapped in multiple address maps, an address ~map~
           // must be specified.
           //
           extern function uvm_reg_frontdoor get_frontdoor(uvm_reg_map map = null);
        
        
           //----------------
           // Group: Backdoor
           //----------------
        
           // Function: set_backdoor
           //
           // Set a user-defined backdoor for this memory
           //
           // By default, memories are accessed via the built-in string-based
           // DPI routines if an HDL path has been specified using the
           // <uvm_mem::configure()> or <uvm_mem::add_hdl_path()> method.
           // If this default mechanism is not suitable (e.g. because
           // the memory is not implemented in pure SystemVerilog)
           // a user-defined access
           // mechanism must be defined and associated with
           // the corresponding memory abstraction class
           //
           extern function void set_backdoor (uvm_reg_backdoor bkdr,
                                              string fname = "",
                                              int lineno = 0);
        
        
           // Function: get_backdoor
           //
           // Returns the user-defined backdoor for this memory
           //
           // If null, no user-defined backdoor has been defined.
           // A user-defined backdoor is defined
           // by using the <uvm_reg::set_backdoor()> method. 
           //
           // If ~inherit~ is TRUE, returns the backdoor of the parent block
           // if none have been specified for this memory.
           //
           extern function uvm_reg_backdoor get_backdoor(bit inherited = 1);
        
        
           // Function: clear_hdl_path
           //
           // Delete HDL paths
           //
           // Remove any previously specified HDL path to the memory instance
           // for the specified design abstraction.
           //
           extern function void clear_hdl_path (string kind = "RTL");
        
           
           // Function: add_hdl_path
           //
           // Add an HDL path
           //
           // Add the specified HDL path to the memory instance for the specified
           // design abstraction. This method may be called more than once for the
           // same design abstraction if the memory is physically duplicated
           // in the design abstraction
           //
           extern function void add_hdl_path (uvm_hdl_path_slice slices[],
                                              string kind = "RTL");
           
        
           // Function: add_hdl_path_slice
           //
           // Add the specified HDL slice to the HDL path for the specified
           // design abstraction.
           // If ~first~ is TRUE, starts the specification of a duplicate
           // HDL implementation of the memory.
           //
           extern function void add_hdl_path_slice(string name,
                                                   int offset,
                                                   int size,
                                                   bit first = 0,
                                                   string kind = "RTL");
        
        
           // Function: has_hdl_path
           //
           // Check if a HDL path is specified
           //
           // Returns TRUE if the memory instance has a HDL path defined for the
           // specified design abstraction. If no design abstraction is specified,
           // uses the default design abstraction specified for the parent block.
           //
           extern function bit  has_hdl_path (string kind = "");
        
        
           // Function: get_hdl_path
           //
           // Get the incremental HDL path(s)
           //
           // Returns the HDL path(s) defined for the specified design abstraction
           // in the memory instance.
           // Returns only the component of the HDL paths that corresponds to
           // the memory, not a full hierarchical path
           //
           // If no design asbtraction is specified, the default design abstraction
           // for the parent block is used.
           //
           extern function void get_hdl_path (ref uvm_hdl_path_concat paths[$],
                                              input string kind = "");
        
        
           // Function: get_full_hdl_path
           //
           // Get the full hierarchical HDL path(s)
           //
           // Returns the full hierarchical HDL path(s) defined for the specified
           // design abstraction in the memory instance.
           // There may be more than one path returned even
           // if only one path was defined for the memory instance, if any of the
           // parent components have more than one path defined for the same design
           // abstraction
           //
           // If no design asbtraction is specified, the default design abstraction
           // for each ancestor block is used to get each incremental path.
           //
           extern function void get_full_hdl_path (ref uvm_hdl_path_concat paths[$],
                                                   input string kind = "",
                                                   input string separator = ".");
        
           // Function: get_hdl_path_kinds
           //
           // Get design abstractions for which HDL paths have been defined
           //
           extern function void get_hdl_path_kinds (ref string kinds[$]);
        
           // Function: backdoor_read
           //
           // User-define backdoor read access
           //
           // Override the default string-based DPI backdoor access read
           // for this memory type.
           // By default calls <uvm_mem::backdoor_read_func()>.
           //
           extern virtual protected task backdoor_read(uvm_reg_item rw);
        
        
           // Function: backdoor_write
           //
           // User-defined backdoor read access
           //
           // Override the default string-based DPI backdoor access write
           // for this memory type.
           //
           extern virtual task backdoor_write(uvm_reg_item rw);
        
           
           // Function: backdoor_read_func
           //
           // User-defined backdoor read access
           //
           // Override the default string-based DPI backdoor access read
           // for this memory type.
           //
           extern virtual function uvm_status_e backdoor_read_func(uvm_reg_item rw);
        
        
           //-----------------
           // Group: Callbacks
           //-----------------
%000001    `uvm_register_cb(uvm_mem, uvm_reg_cbs)
-000001  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        
           // Task: pre_write
           //
           // Called before memory write.
           //
           // If the ~offset~, ~value~, access ~path~,
           // or address ~map~ are modified, the updated offset, data value,
           // access path or address map will be used to perform the memory operation.
           // If the ~status~ is modified to anything other than <UVM_IS_OK>,
           // the operation is aborted.
           //
           // The registered callback methods are invoked after the invocation
           // of this method.
           //
%000000    virtual task pre_write(uvm_reg_item rw); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        
           // Task: post_write
           //
           // Called after memory write.
           //
           // If the ~status~ is modified, the updated status will be
           // returned by the memory operation.
           //
           // The registered callback methods are invoked before the invocation
           // of this method.
           //
%000000    virtual task post_write(uvm_reg_item rw); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        
           // Task: pre_read
           //
           // Called before memory read.
           //
           // If the ~offset~, access ~path~ or address ~map~ are modified,
           // the updated offset, access path or address map will be used to perform
           // the memory operation.
           // If the ~status~ is modified to anything other than <UVM_IS_OK>,
           // the operation is aborted.
           //
           // The registered callback methods are invoked after the invocation
           // of this method.
           //
%000000    virtual task pre_read(uvm_reg_item rw); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        
           // Task: post_read
           //
           // Called after memory read.
           //
           // If the readback data or ~status~ is modified,
           // the updated readback //data or status will be
           // returned by the memory operation.
           //
           // The registered callback methods are invoked before the invocation
           // of this method.
           //
%000000    virtual task post_read(uvm_reg_item rw); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        
           //----------------
           // Group: Coverage
           //----------------
        
           // Function: build_coverage
           //
           // Check if all of the specified coverage model must be built.
           //
           // Check which of the specified coverage model must be built
           // in this instance of the memory abstraction class,
           // as specified by calls to <uvm_reg::include_coverage()>.
           //
           // Models are specified by adding the symbolic value of individual
           // coverage model as defined in <uvm_coverage_model_e>.
           // Returns the sum of all coverage models to be built in the
           // memory model.
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
           // Check if memory has coverage model(s)
           //
           // Returns TRUE if the memory abstraction class contains a coverage model
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
           // for this memory.
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
           // coverage models that are present in the memory abstraction classes,
           // then enabled during construction.
           // See the <uvm_mem::has_coverage()> method to identify
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
           // See <uvm_mem::set_coverage()> for more details. 
           //
           extern virtual function bit get_coverage(uvm_reg_cvr_t is_on);
        
        
           // Function: sample
           //
           // Functional coverage measurement method
           //
           // This method is invoked by the memory abstraction class
           // whenever an address within one of its address map
           // is succesfully read or written.
           // The specified offset is the offset within the memory,
           // not an absolute address.
           //
           // Empty by default, this method may be extended by the
           // abstraction class generator to perform the required sampling
           // in any provided functional coverage model.
           //
%000000    protected virtual function void  sample(uvm_reg_addr_t offset,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                                   bit            is_read,
                                                   uvm_reg_map    map);
           endfunction
        
%000000    /*local*/ function void XsampleX(uvm_reg_addr_t addr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                            bit            is_read,
                                            uvm_reg_map    map);
%000000       sample(addr, is_read, map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           endfunction
        
           // Core ovm_object operations
        
           extern virtual function void do_print (uvm_printer printer);
           extern virtual function string convert2string();
           extern virtual function uvm_object clone();
           extern virtual function void do_copy   (uvm_object rhs);
           extern virtual function bit do_compare (uvm_object  rhs,
                                                  uvm_comparer comparer);
           extern virtual function void do_pack (uvm_packer packer);
           extern virtual function void do_unpack (uvm_packer packer);
        
        
        endclass: uvm_mem
        
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        
        // new
        
%000000 function uvm_mem::new (string           name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                               longint unsigned size,
                               int unsigned     n_bits,
                               string           access = "RW",
                               int              has_coverage = UVM_NO_COVERAGE);
        
%000000    super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_locked = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (n_bits == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       `uvm_error("RegModel", {"Memory '",get_full_name(),"' cannot have 0 bits"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       n_bits = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
%000000    m_size      = size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_n_bits    = n_bits;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_backdoor  = null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_access    = access.toupper();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_has_cover = has_coverage;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_hdl_paths_pool = new("hdl_paths");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (n_bits > m_max_size)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       m_max_size = n_bits;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction: new
        
        
        // configure
        
%000000 function void uvm_mem::configure(uvm_reg_block  parent,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                         string         hdl_path="");
        
%000000    if (parent == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      `uvm_fatal("REG/NULL_PARENT","configure: parent argument is null") 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    m_parent = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (m_access != "RW" && m_access != "RO") begin
-000000  point: type=expr comment=((m_access != %22RO%22)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((m_access != %22RW%22)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((m_access != %22RW%22)==1 && (m_access != %22RO%22)==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       `uvm_error("RegModel", {"Memory '",get_full_name(),"' can only be RW or RO"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       m_access = "RW";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       uvm_mem_mam_cfg cfg = new;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000       cfg.n_bytes      = ((m_n_bits-1) / 8) + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       cfg.start_offset = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       cfg.end_offset   = m_size-1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000       cfg.mode     = uvm_mem_mam::GREEDY;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       cfg.locality = uvm_mem_mam::BROAD;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000       mam = new(get_full_name(), cfg, this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    m_parent.add_mem(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (hdl_path != "") add_hdl_path_slice(hdl_path, -1, -1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: configure
        
        
        // set_offset
        
%000000 function void uvm_mem::set_offset (uvm_reg_map    map,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                           uvm_reg_addr_t offset,
                                           bit unmapped = 0);
        
%000000    uvm_reg_map orig_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (m_maps.num() > 1 && map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_error("RegModel",{"set_offset requires a non-null map when memory '",
%000000                  get_full_name(),"' belongs to more than one map."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    map = get_local_map(map,"set_offset()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000    map.m_set_mem_offset(this, offset, unmapped);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // add_map
        
%000000 function void uvm_mem::add_map(uvm_reg_map map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   m_maps[map] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // Xlock_modelX
        
%000000 function void uvm_mem::Xlock_modelX();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_locked = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: Xlock_modelX
        
        
        // get_full_name
        
%000000 function string uvm_mem::get_full_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (m_parent == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return get_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000    return {m_parent.get_full_name(), ".", get_name()};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction: get_full_name
        
        
        // get_block
        
%000000 function uvm_reg_block uvm_mem::get_block();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return m_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_block
        
        
        // get_n_maps
        
%000000 function int uvm_mem::get_n_maps();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return m_maps.num();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_n_maps
        
        
        // get_maps
        
%000000 function void uvm_mem::get_maps(ref uvm_reg_map maps[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    foreach (m_maps[map])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      maps.push_back(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // is_in_map
        
%000000 function bit uvm_mem::is_in_map(uvm_reg_map map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (m_maps.exists(map))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000    foreach (m_maps[l]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     uvm_reg_map local_map=l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_map parent_map = local_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000      while (parent_map != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        if (parent_map == map)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        parent_map = parent_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
             end
           end
%000000    return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // get_local_map
        
%000000 function uvm_reg_map uvm_mem::get_local_map(uvm_reg_map map, string caller="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return get_default_map();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (m_maps.exists(map))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return map; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000    foreach (m_maps[l]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_map local_map = l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_map parent_map = local_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000      while (parent_map != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        if (parent_map == map)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          return local_map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        parent_map = parent_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
             end
           end
           `uvm_warning("RegModel", 
               {"Memory '",get_full_name(),"' is not contained within map '",map.get_full_name(),"'",
%000000         (caller == "" ? "": {" (called from ",caller,")"})})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((caller == %22%22)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((caller == %22%22)==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // get_default_map
        
%000000 function uvm_reg_map uvm_mem::get_default_map(string caller="");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           // if mem is not associated with any may, return null
%000000    if (m_maps.num() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_warning("RegModel", 
                {"Memory '",get_full_name(),"' is not registered with any map",
%000000          (caller == "" ? "": {" (called from ",caller,")"})})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((caller == %22%22)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((caller == %22%22)==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
           // if only one map, choose that
%000000    if (m_maps.num() == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      void'(m_maps.first(get_default_map));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
           // try to choose one based on default_map in parent blocks.
%000000    foreach (m_maps[l]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_map map = l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_block blk = map.get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_map default_map = blk.get_default_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      if (default_map != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        uvm_reg_map local_map = get_local_map(default_map);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        if (local_map != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          return local_map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
             end
           end
        
           // if that fails, choose the first in this mem's maps
        
%000000    void'(m_maps.first(get_default_map));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction
        
        
        // get_access
        
%000000 function string uvm_mem::get_access(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    get_access = m_access;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (get_n_maps() == 1) return get_access;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    map = get_local_map(map, "get_access()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (map == null) return get_access;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
           // Is the memory restricted in this map?
%000000    case (get_rights(map))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      "RW":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
               // No restrictions
%000000        return get_access;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000      "RO":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000        case (get_access)
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000          "RW", "RO": get_access = "RO";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000          "WO":    `uvm_error("RegModel", {"WO memory '",get_full_name(),
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000                        "' restricted to RO in map '",map.get_full_name(),"'"})
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000          default: `uvm_error("RegModel", {"Memory '",get_full_name(),
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000                        "' has invalid access mode, '",get_access,"'"})
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
               endcase
        
%000000      "WO":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000        case (get_access)
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000          "RW", "WO": get_access = "WO";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000          "RO":    `uvm_error("RegModel", {"RO memory '",get_full_name(),
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000                        "' restricted to WO in map '",map.get_full_name(),"'"})
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000          default: `uvm_error("RegModel", {"Memory '",get_full_name(),
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000                        "' has invalid access mode, '",get_access,"'"})
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
               endcase
        
%000000      default: `uvm_error("RegModel", {"Shared memory '",get_full_name(),
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
%000000                   "' is not shared in map '",map.get_full_name(),"'"})
-000000  point: type=line comment=case hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
           endcase
        endfunction: get_access
        
        
        // get_rights
        
%000000 function string uvm_mem::get_rights(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    uvm_reg_map_info info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           // No right restrictions if not shared
%000000    if (m_maps.num() <= 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return "RW";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    map = get_local_map(map,"get_rights()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return "RW";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    info = map.get_mem_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return info.rights;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction: get_rights
        
        
        // get_offset
        
%000000 function uvm_reg_addr_t uvm_mem::get_offset(uvm_reg_addr_t offset = 0,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                                    uvm_reg_map map = null);
        
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    uvm_reg_map orig_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    map = get_local_map(map,"get_offset()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000    map_info = map.get_mem_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000    if (map_info.unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_warning("RegModel", {"Memory '",get_name(),
                           "' is unmapped in map '",
%000000                    ((orig_map == null) ? map.get_full_name() : orig_map.get_full_name()),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
                 
%000000    return map_info.offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction: get_offset
        
        
        
        // get_virtual_registers
        
%000000 function void uvm_mem::get_virtual_registers(ref uvm_vreg regs[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   foreach (m_vregs[vreg])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      regs.push_back(vreg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // get_virtual_fields
        
%000000 function void uvm_mem::get_virtual_fields(ref uvm_vreg_field fields[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   foreach (m_vregs[l])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     uvm_vreg vreg = l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     vreg.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
          end
        endfunction: get_virtual_fields
        
        
        // get_vfield_by_name
        
%000000 function uvm_vreg_field uvm_mem::get_vfield_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
          // Return first occurrence of vfield matching name
%000000   uvm_vreg_field vfields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   get_virtual_fields(vfields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   foreach (vfields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000     if (vfields[i].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return vfields[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
          `uvm_warning("RegModel", {"Unable to find virtual field '",name,
%000000                        "' in memory '",get_full_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_vfield_by_name
        
        
        // get_vreg_by_name
        
%000000 function uvm_vreg uvm_mem::get_vreg_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   foreach (m_vregs[l])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     uvm_vreg vreg = l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     if (vreg.get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return vreg;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
          end
        
          `uvm_warning("RegModel", {"Unable to find virtual register '",name,
%000000                        "' in memory '",get_full_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction: get_vreg_by_name
        
        
        // get_vreg_by_offset
        
%000000 function uvm_vreg uvm_mem::get_vreg_by_offset(uvm_reg_addr_t offset,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                                      uvm_reg_map map = null);
%000000    `uvm_error("RegModel", "uvm_mem::get_vreg_by_offset() not yet implemented")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_vreg_by_offset
        
        
        
        // get_addresses
        
%000000 function int uvm_mem::get_addresses(uvm_reg_addr_t offset = 0,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                            uvm_reg_map map=null,
                                            ref uvm_reg_addr_t addr[]);
        
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    uvm_reg_map system_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    uvm_reg_map orig_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    map = get_local_map(map,"get_addresses()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    map_info = map.get_mem_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (map_info.unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_warning("RegModel", {"Memory '",get_name(),
                           "' is unmapped in map '",
%000000                    ((orig_map == null) ? map.get_full_name() : orig_map.get_full_name()),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    addr = map_info.addr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    foreach (addr[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       addr[i] = addr[i] + map_info.mem_range.stride * offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    return map.get_n_bytes();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction
        
        
        // get_address
        
%000000 function uvm_reg_addr_t uvm_mem::get_address(uvm_reg_addr_t offset = 0,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                                     uvm_reg_map map = null);
%000000    uvm_reg_addr_t  addr[];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    void'(get_addresses(offset, map, addr));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return addr[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // get_size
        
%000000 function longint unsigned uvm_mem::get_size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return m_size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_size
        
        
        // get_n_bits
        
%000000 function int unsigned uvm_mem::get_n_bits();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return m_n_bits;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_n_bits
        
        
        // get_max_size
        
%000001 function int unsigned uvm_mem::get_max_size();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000001    return m_max_size;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_max_size
        
        
        // get_n_bytes
        
%000000 function int unsigned uvm_mem::get_n_bytes();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return (m_n_bits - 1) / 8 + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_n_bytes
        
        
        
        
        //---------
        // COVERAGE
        //---------
        
        
%000000 function uvm_reg_cvr_t uvm_mem::build_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    build_coverage = UVM_NO_COVERAGE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    void'(uvm_reg_cvr_rsrc_db::read_by_name({"uvm_reg::", get_full_name()},
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                                            "include_coverage",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                                            build_coverage, this));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return build_coverage & models;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: build_coverage
        
        
        // add_coverage
        
%000000 function void uvm_mem::add_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_has_cover |= models;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: add_coverage
        
        
        // has_coverage
        
%000000 function bit uvm_mem::has_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return ((m_has_cover & models) == models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: has_coverage
        
        
        // set_coverage
        
%000000 function uvm_reg_cvr_t uvm_mem::set_coverage(uvm_reg_cvr_t is_on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (is_on == uvm_reg_cvr_t'(UVM_NO_COVERAGE)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       m_cover_on = is_on;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return m_cover_on;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    m_cover_on = m_has_cover & is_on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    return m_cover_on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: set_coverage
        
        
        // get_coverage
        
%000000 function bit uvm_mem::get_coverage(uvm_reg_cvr_t is_on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (has_coverage(is_on) == 0) return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return ((m_cover_on & is_on) == is_on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_coverage
        
        
        
        
        //-----------
        // HDL ACCESS
        //-----------
        
        // write
        //------
        
%000000 task uvm_mem::write(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                            input  uvm_reg_addr_t    offset,
                            input  uvm_reg_data_t    value,
                            input  uvm_path_e        path = UVM_DEFAULT_PATH,
                            input  uvm_reg_map       map = null,
                            input  uvm_sequence_base parent = null,
                            input  int               prior = -1,
                            input  uvm_object        extension = null,
                            input  string            fname = "",
                            input  int               lineno = 0);
        
           // create an abstract transaction for this operation
%000000    uvm_reg_item rw = uvm_reg_item::type_id::create("mem_write",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element_kind = UVM_MEM;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.kind         = UVM_WRITE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.offset       = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.value[0]     = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.path         = path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.map          = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.prior        = prior;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    do_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endtask: write
        
        
        // read
        
%000000 task uvm_mem::read(output uvm_status_e       status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                           input  uvm_reg_addr_t     offset,
%000000                    output uvm_reg_data_t     value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                           input  uvm_path_e         path = UVM_DEFAULT_PATH,
                           input  uvm_reg_map        map = null,
                           input  uvm_sequence_base  parent = null,
                           input  int                prior = -1,
                           input  uvm_object         extension = null,
                           input  string             fname = "",
                           input  int                lineno = 0);
           
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw = uvm_reg_item::type_id::create("mem_read",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element_kind = UVM_MEM;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.kind         = UVM_READ;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.value[0]     = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.offset       = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.path         = path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.map          = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.prior        = prior;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    do_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    value = rw.value[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endtask: read
        
        
        // burst_write
        
%000000 task uvm_mem::burst_write(output uvm_status_e       status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                  input  uvm_reg_addr_t     offset,
                                  input  uvm_reg_data_t     value[],
                                  input  uvm_path_e         path = UVM_DEFAULT_PATH,
                                  input  uvm_reg_map        map = null,
                                  input  uvm_sequence_base  parent = null,
                                  input  int                prior = -1,
                                  input  uvm_object         extension = null,
                                  input  string             fname = "",
                                  input  int                lineno = 0);
        
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw = uvm_reg_item::type_id::create("mem_burst_write",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element_kind = UVM_MEM;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.kind         = UVM_BURST_WRITE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.offset       = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.value        = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.path         = path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.map          = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.prior        = prior;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    do_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endtask: burst_write
        
        
        // burst_read
        
%000000 task uvm_mem::burst_read(output uvm_status_e       status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                 input  uvm_reg_addr_t     offset,
                                 ref    uvm_reg_data_t     value[],
                                 input  uvm_path_e         path = UVM_DEFAULT_PATH,
                                 input  uvm_reg_map        map = null,
                                 input  uvm_sequence_base  parent = null,
                                 input  int                prior = -1,
                                 input  uvm_object         extension = null,
                                 input  string             fname = "",
                                 input  int                lineno = 0);
        
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw = uvm_reg_item::type_id::create("mem_burst_read",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element_kind = UVM_MEM;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.kind         = UVM_BURST_READ;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.offset       = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.value        = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.path         = path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.map          = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.prior        = prior;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    do_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    value  = rw.value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endtask: burst_read
        
        
        // do_write
        
%000000 task uvm_mem::do_write(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    uvm_mem_cb_iter  cbs = new(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000    m_fname  = rw.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_lineno = rw.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (!Xcheck_accessX(rw, map_info, "burst_write()"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    m_write_in_progress = 1'b1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    rw.status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           
           // PRE-WRITE CBS
%000000    pre_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       cb.pre_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (rw.status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       m_write_in_progress = 1'b0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    rw.status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           // FRONTDOOR
%000000    if (rw.path == UVM_FRONTDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000       uvm_reg_map system_map = rw.local_map.get_root_map();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
              
%000000       if (map_info.frontdoor != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          uvm_reg_frontdoor fd = map_info.frontdoor;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000          fd.rw_info = rw;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000          if (fd.sequencer == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000            fd.sequencer = system_map.get_sequencer();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000          fd.start(fd.sequencer, rw.parent);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          rw.local_map.do_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              end
        
%000000       if (rw.status != UVM_NOT_OK)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          for (uvm_reg_addr_t idx = rw.offset;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000               idx <= rw.offset + rw.value.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000               idx++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             XsampleX(map_info.mem_range.stride * idx, 0, rw.map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             m_parent.XsampleX(map_info.offset +
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                              (map_info.mem_range.stride * idx),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                               0, rw.map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                 end
           end
              
           // BACKDOOR     
%000000    else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              // Mimick front door access, i.e. do not write read-only memories
%000000       if (get_access(rw.map) == "RW") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000          if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000             bkdr.write(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                 else
%000000             backdoor_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              end
              else
%000000          rw.status = UVM_IS_OK;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
           // POST-WRITE CBS
%000000    post_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       cb.post_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           // REPORT
%000000    if (uvm_report_enabled(UVM_HIGH, UVM_INFO, "RegModel")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      string path_s,value_s,pre_s,range_s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000      if (rw.path == UVM_FRONTDOOR)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        path_s = (map_info.frontdoor != null) ? "user frontdoor" :
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                                                       {"map ",rw.map.get_full_name()};
             else
%000000        path_s = (get_backdoor() != null) ? "user backdoor" : "DPI backdoor";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) != null)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) != null)==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000      if (rw.value.size() > 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        value_s = "='{";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        pre_s = "Burst ";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        foreach (rw.value[i])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          value_s = {value_s,$sformatf("%0h,",rw.value[i])};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        value_s[value_s.len()-1]="}";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        range_s = $sformatf("[%0d:%0d]",rw.offset,rw.offset+rw.value.size());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
             end
%000000      else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        value_s = $sformatf("=%0h",rw.value[0]);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        range_s = $sformatf("[%0d]",rw.offset);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
             end
        
%000000      uvm_report_info("RegModel", {pre_s,"Wrote memory via ",path_s,": ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000                                   get_full_name(),range_s,value_s}, UVM_HIGH);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    m_write_in_progress = 1'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endtask: do_write
        
        
        // do_read
        
%000000 task uvm_mem::do_read(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    uvm_mem_cb_iter cbs = new(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000    m_fname = rw.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_lineno = rw.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (!Xcheck_accessX(rw, map_info, "burst_read()"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    m_read_in_progress = 1'b1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    rw.status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           
           // PRE-READ CBS
%000000    pre_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       cb.pre_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (rw.status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       m_read_in_progress = 1'b0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    rw.status = UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           // FRONTDOOR
%000000    if (rw.path == UVM_FRONTDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              
%000000       uvm_reg_map system_map = rw.local_map.get_root_map();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                 
%000000       if (map_info.frontdoor != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          uvm_reg_frontdoor fd = map_info.frontdoor;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000          fd.rw_info = rw;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000          if (fd.sequencer == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000            fd.sequencer = system_map.get_sequencer();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000          fd.start(fd.sequencer, rw.parent);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          rw.local_map.do_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              end
        
%000000       if (rw.status != UVM_NOT_OK)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          for (uvm_reg_addr_t idx = rw.offset;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000               idx <= rw.offset + rw.value.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000               idx++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             XsampleX(map_info.mem_range.stride * idx, 1, rw.map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             m_parent.XsampleX(map_info.offset +
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                              (map_info.mem_range.stride * idx),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                               1, rw.map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                 end
           end
        
           // BACKDOOR
%000000    else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          bkdr.read(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
              else
%000000          backdoor_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
           // POST-READ CBS
%000000    post_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       cb.post_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           // REPORT
%000000    if (uvm_report_enabled(UVM_HIGH, UVM_INFO, "RegModel")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      string path_s,value_s,pre_s,range_s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000      if (rw.path == UVM_FRONTDOOR)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        path_s = (map_info.frontdoor != null) ? "user frontdoor" :
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                                                       {"map ",rw.map.get_full_name()};
             else
%000000        path_s = (get_backdoor() != null) ? "user backdoor" : "DPI backdoor";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) != null)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) != null)==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000      if (rw.value.size() > 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        value_s = "='{";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        pre_s = "Burst ";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        foreach (rw.value[i])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          value_s = {value_s,$sformatf("%0h,",rw.value[i])};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        value_s[value_s.len()-1]="}";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        range_s = $sformatf("[%0d:%0d]",rw.offset,(rw.offset+rw.value.size()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
             end
%000000      else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        value_s = $sformatf("=%0h",rw.value[0]);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        range_s = $sformatf("[%0d]",rw.offset);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
             end
        
%000000       uvm_report_info("RegModel", {pre_s,"Read memory via ",path_s,": ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000                                    get_full_name(),range_s,value_s}, UVM_HIGH);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    m_read_in_progress = 1'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endtask: do_read
        
        
        // Xcheck_accessX
        
%000000 function bit uvm_mem::Xcheck_accessX(input uvm_reg_item rw,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                                      output uvm_reg_map_info map_info,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                             input string caller);
        
%000000    if (rw.offset >= m_size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_error(get_type_name(), 
                 $sformatf("Offset 'h%0h exceeds size of memory, 'h%0h",
%000000            rw.offset, m_size))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    if (rw.path == UVM_DEFAULT_PATH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      rw.path = m_parent.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (rw.path == UVM_BACKDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       if (get_backdoor() == null && !has_hdl_path()) begin
-000000  point: type=expr comment=((get_backdoor(1'h1) == null)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) == null)==1 && has_hdl_path(%22%22)==0) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(%22%22)==1) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
                 `uvm_warning("RegModel",
                    {"No backdoor access available for memory '",get_full_name(),
%000000             "' . Using frontdoor instead."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          rw.path = UVM_FRONTDOOR;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
              end
              else
%000000         rw.map = uvm_reg_map::backdoor();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    if (rw.path != UVM_BACKDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000      rw.local_map = get_local_map(rw.map,caller);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000      if (rw.local_map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
                `uvm_error(get_type_name(), 
                   {"No transactor available to physically access memory from map '",
%000000             rw.map.get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000         rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000         return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
             end
        
%000000      map_info = rw.local_map.get_mem_map_info(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000      if (map_info.frontdoor == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000         if (map_info.unmapped) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                   `uvm_error("RegModel", {"Memory '",get_full_name(),
                              "' unmapped in map '", rw.map.get_full_name(),
%000000                       "' and does not have a user-defined frontdoor"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000            rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000            return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                end
        
%000000         if ((rw.value.size() > 1)) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000            if (get_n_bits() > rw.local_map.get_n_bytes()*8) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
                      `uvm_error("RegModel",
                            $sformatf("Cannot burst a %0d-bit memory through a narrower data path (%0d bytes)",
%000000                     get_n_bits(), rw.local_map.get_n_bytes()*8));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000               rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000               return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                   end
%000000            if (rw.offset + rw.value.size() > m_size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
                      `uvm_error("RegModel",
                          $sformatf("Burst of size 'd%0d starting at offset 'd%0d exceeds size of memory, 'd%0d",
%000000                       rw.value.size(), rw.offset, m_size))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000               return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                   end
                end
             end
        
%000000      if (rw.map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        rw.map = rw.local_map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        //-------
        // ACCESS
        //-------
        
        // poke
        
%000000 task uvm_mem::poke(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                           input  uvm_reg_addr_t    offset,
                           input  uvm_reg_data_t    value,
                           input  string            kind = "",
                           input  uvm_sequence_base parent = null,
                           input  uvm_object        extension = null,
                           input  string            fname = "",
                           input  int               lineno = 0);
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (bkdr == null && !has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_error("RegModel", {"No backdoor access available in memory '",
%000000                              get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
           // create an abstract transaction for this operation
%000000    rw = uvm_reg_item::type_id::create("mem_poke_item",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.path         = UVM_BACKDOOR;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element_kind = UVM_MEM;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.kind         = UVM_WRITE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.offset       = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.value[0]     = value & ((1 << m_n_bits)-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.bd_kind      = kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      bkdr.write(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           else
%000000      backdoor_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           `uvm_info("RegModel", $sformatf("Poked memory '%s[%0d]' with value 'h%h",
%000000                               get_full_name(), offset, value),UVM_HIGH);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
        endtask: poke
        
        
        // peek
        
%000000 task uvm_mem::peek(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                           input  uvm_reg_addr_t    offset,
%000000                    output uvm_reg_data_t    value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                           input  string            kind = "",
                           input  uvm_sequence_base parent = null,
                           input  uvm_object        extension = null,
                           input  string            fname = "",
                           input  int               lineno = 0);
%000000    uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (bkdr == null && !has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_error("RegModel", {"No backdoor access available in memory '",
%000000                  get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
           // create an abstract transaction for this operation
%000000    rw = uvm_reg_item::type_id::create("mem_peek_item",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.path         = UVM_BACKDOOR;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.element_kind = UVM_MEM;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.kind         = UVM_READ;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.offset       = offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.bd_kind      = kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      bkdr.read(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           else
%000000      backdoor_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    value  = rw.value[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           `uvm_info("RegModel", $sformatf("Peeked memory '%s[%0d]' has value 'h%h",
%000000                          get_full_name(), offset, value),UVM_HIGH);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        endtask: peek
        
        
        //-----------------
        // Group- Frontdoor
        //-----------------
        
        // set_frontdoor
        
%000000 function void uvm_mem::set_frontdoor(uvm_reg_frontdoor ftdr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                             uvm_reg_map       map = null,
                                             string            fname = "",
                                             int               lineno = 0);
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    map = get_local_map(map, "set_frontdoor()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_error("RegModel", {"Memory '",get_full_name(),
%000000                  "' not found in map '", map.get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    map_info = map.get_mem_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    map_info.frontdoor = ftdr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction: set_frontdoor
        
        
        // get_frontdoor
        
%000000 function uvm_reg_frontdoor uvm_mem::get_frontdoor(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    map = get_local_map(map, "set_frontdoor()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_error("RegModel", {"Memory '",get_full_name(),
%000000                  "' not found in map '", map.get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    map_info = map.get_mem_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return map_info.frontdoor;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
        endfunction: get_frontdoor
        
        
        //----------------
        // Group- Backdoor
        //----------------
        
        // set_backdoor
        
%000000 function void uvm_mem::set_backdoor(uvm_reg_backdoor bkdr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                            string fname = "",
                                            int lineno = 0);
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    m_backdoor = bkdr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: set_backdoor
        
        
        // get_backdoor
        
%000000 function uvm_reg_backdoor uvm_mem::get_backdoor(bit inherited = 1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000    if (m_backdoor == null && inherited) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_block blk = get_parent();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_backdoor bkdr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000      while (blk != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        bkdr = blk.get_backdoor();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        if (bkdr != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          m_backdoor = bkdr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000          break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
               end
%000000        blk = blk.get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
             end
           end
        
%000000    return m_backdoor;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction: get_backdoor
        
        
        // backdoor_read_func
        
%000000 function uvm_status_e uvm_mem::backdoor_read_func(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   uvm_hdl_path_concat paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   uvm_hdl_data_t val;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   bit ok=1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   get_full_hdl_path(paths,rw.bd_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   foreach (rw.value[mem_idx]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      string idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      idx.itoa(rw.offset + mem_idx);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      foreach (paths[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000         uvm_hdl_path_concat hdl_concat = paths[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000         val = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000         foreach (hdl_concat.slices[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000            string hdl_path = {hdl_concat.slices[j].path, "[", idx, "]"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000            `uvm_info("RegModel", {"backdoor_read from ",hdl_path},UVM_DEBUG)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
         
%000000            if (hdl_concat.slices[j].offset < 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000               ok &= uvm_hdl_read(hdl_path, val);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000               continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                   end
%000000            begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000               uvm_reg_data_t slice;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000               int k = hdl_concat.slices[j].offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000               ok &= uvm_hdl_read(hdl_path, slice);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000               repeat (hdl_concat.slices[j].size) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                  val[k++] = slice[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000                  slice >>= 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                      end
                   end
                end
        
%000000         val &= (1 << m_n_bits)-1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000         if (i == 0)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000            rw.value[mem_idx] = val;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000         if (val != rw.value[mem_idx]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                   `uvm_error("RegModel", $sformatf("Backdoor read of register %s with multiple HDL copies: values are not the same: %0h at path '%s', and %0h at path '%s'. Returning first value.",
                       get_full_name(), rw.value[mem_idx], uvm_hdl_concat2string(paths[0]),
%000000                val, uvm_hdl_concat2string(paths[i]))); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000            return UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                 end
              end
          end
        
%000000   rw.status = (ok) ? UVM_IS_OK : UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(ok==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(ok==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   return rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // backdoor_read
        
%000000 task uvm_mem::backdoor_read(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   rw.status = backdoor_read_func(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endtask
        
        
        // backdoor_write
        
%000000 task uvm_mem::backdoor_write(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   uvm_hdl_path_concat paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   bit ok=1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
           
%000000   get_full_hdl_path(paths,rw.bd_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000   foreach (rw.value[mem_idx]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      string idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      idx.itoa(rw.offset + mem_idx);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      foreach (paths[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        uvm_hdl_path_concat hdl_concat = paths[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        foreach (hdl_concat.slices[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000           `uvm_info("RegModel", $sformatf("backdoor_write to %s ",hdl_concat.slices[j].path),UVM_DEBUG);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
         
%000000           if (hdl_concat.slices[j].offset < 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000              ok &= uvm_hdl_deposit({hdl_concat.slices[j].path,"[", idx, "]"},rw.value[mem_idx]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000              continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                  end
%000000           begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             uvm_reg_data_t slice;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             slice = rw.value[mem_idx] >> hdl_concat.slices[j].offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             slice &= (1 << hdl_concat.slices[j].size)-1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             ok &= uvm_hdl_deposit({hdl_concat.slices[j].path, "[", idx, "]"}, slice);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                  end
               end
             end
          end
%000000   rw.status = (ok ? UVM_IS_OK : UVM_NOT_OK);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(ok==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(ok==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
        endtask
        
        
        
        
        // clear_hdl_path
        
%000000 function void uvm_mem::clear_hdl_path(string kind = "RTL");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   if (kind == "ALL") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000     m_hdl_paths_pool = new("hdl_paths");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
          end
        
%000000   if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000     kind = m_parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   if (!m_hdl_paths_pool.exists(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000     `uvm_warning("RegModel",{"Unknown HDL Abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
          end
        
%000000   m_hdl_paths_pool.delete(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // add_hdl_path
        
%000000 function void uvm_mem::add_hdl_path(uvm_hdl_path_slice slices[], string kind = "RTL");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     uvm_queue #(uvm_hdl_path_concat) paths = m_hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     uvm_hdl_path_concat concat = new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000     concat.set(slices);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     paths.push_back(concat);  
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // add_hdl_path_slice
        
%000000 function void uvm_mem::add_hdl_path_slice(string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                                  int offset,
                                                  int size,
%000000                                           bit first = 0,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000                                           string kind = "RTL");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000     uvm_queue #(uvm_hdl_path_concat) paths=m_hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     uvm_hdl_path_concat concat;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000     if (first || paths.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000        concat = new();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000        paths.push_back(concat);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
            end
            else
%000000        concat = paths.get(paths.size()-1);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
             
%000000     concat.add_path(name, offset, size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // has_hdl_path
        
%000000 function bit  uvm_mem::has_hdl_path(string kind = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000     kind = m_parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
          
%000000   return m_hdl_paths_pool.exists(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // get_hdl_path
        
%000000 function void uvm_mem::get_hdl_path(ref uvm_hdl_path_concat paths[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                            input string kind = "");
        
%000000   uvm_queue #(uvm_hdl_path_concat) hdl_paths;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      kind = m_parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   if (!has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==0) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==1) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
            `uvm_error("RegModel",
%000000         {"Memory does not have hdl path defined for abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
          end
        
%000000   hdl_paths = m_hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000   for (int i=0; i<hdl_paths.size();i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_hdl_path_concat t = hdl_paths.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      paths.push_back(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
          end
        
        endfunction
        
        
        // get_hdl_path_kinds
        
%000000 function void uvm_mem::get_hdl_path_kinds (ref string kinds[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   string kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   kinds.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   if (!m_hdl_paths_pool.first(kind))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000   do
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000     kinds.push_back(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   while (m_hdl_paths_pool.next(kind));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        // get_full_hdl_path
        
%000000 function void uvm_mem::get_full_hdl_path(ref uvm_hdl_path_concat paths[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                                 input string kind = "",
%000000                                          input string separator = ".");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       kind = m_parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           
%000000    if (!has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==0) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==1) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
              `uvm_error("RegModel",
%000000           {"Memory does not have hdl path defined for abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       uvm_queue #(uvm_hdl_path_concat) hdl_paths = m_hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000       string parent_paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000       m_parent.get_full_hdl_path(parent_paths, kind, separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000       for (int i=0; i<hdl_paths.size();i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000          uvm_hdl_path_concat hdl_concat = hdl_paths.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000          foreach (parent_paths[j])  begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000             uvm_hdl_path_concat t = new;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000             foreach (hdl_concat.slices[k]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000                if (hdl_concat.slices[k].path == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000                   t.add_path(parent_paths[j]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
                       else
%000000                   t.add_path({ parent_paths[j], separator, hdl_concat.slices[k].path },
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000                              hdl_concat.slices[k].offset,
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000                              hdl_concat.slices[k].size);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
                    end
%000000             paths.push_back(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                 end
              end
           end
        endfunction
        
        
        // set_parent
        
%000000 function void uvm_mem::set_parent(uvm_reg_block parent);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   m_parent = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // get_parent
        
%000000 function uvm_reg_block uvm_mem::get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    return get_block();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // convert2string
        
%000000 function string uvm_mem::convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    string res_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    string prefix;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    $sformat(convert2string, "%sMemory %s -- %0dx%0d bits", prefix,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             get_full_name(), get_size(), get_n_bits());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        
%000000    if (m_maps.num()==0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      convert2string = {convert2string, "  (unmapped)\n"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           else
%000000      convert2string = {convert2string, "\n"};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000    foreach (m_maps[map]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      uvm_reg_map parent_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      int unsigned offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000      while (parent_map != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        uvm_reg_map this_map = parent_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        uvm_endianness_e endian_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        parent_map = this_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        endian_name=this_map.get_endian();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
               
%000000        offset = parent_map == null ? this_map.get_base_addr(UVM_NO_HIER) :
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                             parent_map.get_submap_offset(this_map);
%000000        prefix = {prefix, "  "};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000        $sformat(convert2string, "%sMapped in '%s' -- buswidth %0d bytes, %s, offset 'h%0h, size 'h%0h, %s\n", prefix,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000             this_map.get_full_name(), this_map.get_n_bytes(), endian_name.name(), offset,get_size(),get_access(this_map));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
             end
           end
%000000    prefix = "  ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (m_read_in_progress == 1'b1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       if (m_fname != "" && m_lineno != 0)
-000000  point: type=expr comment=((m_fname != %22%22)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((m_fname != %22%22)==1 && (m_lineno != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((m_lineno != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          $sformat(res_str, "%s:%0d ",m_fname, m_lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000       convert2string = {convert2string, "  ", res_str,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000                        "currently executing read method"}; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
%000000    if ( m_write_in_progress == 1'b1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000       if (m_fname != "" && m_lineno != 0)
-000000  point: type=expr comment=((m_fname != %22%22)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((m_fname != %22%22)==1 && (m_lineno != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=expr comment=((m_lineno != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000          $sformat(res_str, "%s:%0d ",m_fname, m_lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000       convert2string = {convert2string, "  ", res_str,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
%000000                        "currently executing write method"}; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
           end
        endfunction
        
        
        // do_print
        
%000000 function void uvm_mem::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
          //printer.print_generic(" ", " ", -1, convert2string());
%000000   printer.print_int("n_bits",get_n_bits(),32, UVM_UNSIGNED);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   printer.print_int("size",get_size(),32, UVM_UNSIGNED);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // clone
        
%000000 function uvm_object uvm_mem::clone();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel memories cannot be cloned")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        // do_copy
        
%000000 function void uvm_mem::do_copy(uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel memories cannot be copied")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // do_compare
        
%000000 function bit uvm_mem::do_compare (uvm_object  rhs,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
                                                uvm_comparer comparer);
%000000   `uvm_warning("RegModel","RegModel memories cannot be compared")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // do_pack
        
%000000 function void uvm_mem::do_pack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   `uvm_warning("RegModel","RegModel memories cannot be packed")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // do_unpack
        
%000000 function void uvm_mem::do_unpack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   `uvm_warning("RegModel","RegModel memories cannot be unpacked")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // Xadd_vregX
        
%000000 function void uvm_mem::Xadd_vregX(uvm_vreg vreg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000   m_vregs[vreg] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        // Xdelete_vregX
        
%000000 function void uvm_mem::Xdelete_vregX(uvm_vreg vreg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_mem__Vclpkg
%000000    if (m_vregs.exists(vreg))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_mem__Vclpkg
%000000      m_vregs.delete(vreg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_mem__Vclpkg
        endfunction
        
        
        
