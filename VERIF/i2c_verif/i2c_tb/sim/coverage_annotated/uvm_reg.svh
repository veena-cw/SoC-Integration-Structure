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
        //
        
        typedef class uvm_reg_cbs;
        typedef class uvm_reg_frontdoor;
        
        //-----------------------------------------------------------------
        // CLASS: uvm_reg
        // Register abstraction base class
        //
        // A register represents a set of fields that are accessible
        // as a single entity.
        //
        // A register may be mapped to one or more address maps,
        // each with different access rights and policy.
        //-----------------------------------------------------------------
        virtual class uvm_reg extends uvm_object;
        
           local bit               m_locked;
           local uvm_reg_block     m_parent;
           local uvm_reg_file      m_regfile_parent;
           local int unsigned      m_n_bits;
           local int unsigned      m_n_used_bits;
           protected bit           m_maps[uvm_reg_map];
           protected uvm_reg_field m_fields[$];   // Fields in LSB to MSB order
           local int               m_has_cover;
           local int               m_cover_on;
           local semaphore         m_atomic;
           local process           m_process;
           local string            m_fname;
           local int               m_lineno;
           local bit               m_read_in_progress;
           local bit               m_write_in_progress; 
           protected bit           m_update_in_progress;
           /*local*/ bit           m_is_busy;
           /*local*/ bit           m_is_locked_by_field;
           local uvm_reg_backdoor  m_backdoor;
        
           local static int unsigned m_max_size;
        
           local uvm_object_string_pool
               #(uvm_queue #(uvm_hdl_path_concat)) m_hdl_paths_pool;
        
           //----------------------
           // Group: Initialization
           //----------------------
        
           // Function: new
           //
           // Create a new instance and type-specific configuration
           //
           // Creates an instance of a register abstraction class with the specified
           // name.
           //
           // ~n_bits~ specifies the total number of bits in the register.
           // Not all bits need to be implemented.
           // This value is usually a multiple of 8.
           //
           // ~has_coverage~ specifies which functional coverage models are present in
           // the extension of the register abstraction class.
           // Multiple functional coverage models may be specified by adding their
           // symbolic names, as defined by the <uvm_coverage_model_e> type.
           //
           extern function new (string name="",
                                int unsigned n_bits,
                                int has_coverage);
        
        
           // Function: configure
           //
           // Instance-specific configuration
           //
           // Specify the parent block of this register.
           // May also set a parent register file for this register,
           //
           // If the register is implemented in a single HDL variable,
           // it's name is specified as the ~hdl_path~.
           // Otherwise, if the register is implemented as a concatenation
           // of variables (usually one per field), then the HDL path
           // must be specified using the <add_hdl_path()> or
           // <add_hdl_path_slice> method.
           //
           extern function void configure (uvm_reg_block blk_parent,
                                           uvm_reg_file regfile_parent = null,
                                           string hdl_path = "");
        
        
           // Function: set_offset
           //
           // Modify the offset of the register
           //
           // The offset of a register within an address map is set using the
           // <uvm_reg_map::add_reg()> method.
           // This method is used to modify that offset dynamically.
           //  
           // Modifying the offset of a register will make the register model
           // diverge from the specification that was used to create it.
           //
           extern virtual function void set_offset (uvm_reg_map    map,
                                                    uvm_reg_addr_t offset,
                                                    bit            unmapped = 0);
        
           /*local*/ extern virtual function void set_parent (uvm_reg_block blk_parent,
                                                              uvm_reg_file regfile_parent);
           /*local*/ extern virtual function void add_field  (uvm_reg_field field);
           /*local*/ extern virtual function void add_map    (uvm_reg_map map);
        
           /*local*/ extern function void   Xlock_modelX;
        
        
           //---------------------
           // Group: Introspection
           //---------------------
        
           // Function: get_name
           //
           // Get the simple name
           //
           // Return the simple object name of this register.
           //
        
           // Function: get_full_name
           //
           // Get the hierarchical name
           //
           // Return the hierarchal name of this register.
           // The base of the hierarchical name is the root block.
           //
           extern virtual function string get_full_name();
        
        
           // Function: get_parent
           //
           // Get the parent block
           //
           extern virtual function uvm_reg_block get_parent ();
           extern virtual function uvm_reg_block get_block  ();
        
        
           // Function: get_regfile
           //
           // Get the parent register file
           //
           // Returns ~null~ if this register is instantiated in a block.
           //
           extern virtual function uvm_reg_file get_regfile ();
        
        
           // Function: get_n_maps
           //
           // Returns the number of address maps this register is mapped in
           //
           extern virtual function int get_n_maps ();
        
        
           // Function: is_in_map
           //
           // Returns 1 if this register is in the specified address ~map~
           //
           extern function bit is_in_map (uvm_reg_map map);
        
        
           // Function: get_maps
           //
           // Returns all of the address ~maps~ where this register is mapped
           //
           extern virtual function void get_maps (ref uvm_reg_map maps[$]);
        
        
           /*local*/ extern virtual function uvm_reg_map get_local_map   (uvm_reg_map map,
                                                                          string caller = "");
           /*local*/ extern virtual function uvm_reg_map get_default_map (string caller = "");
        
        
           // Function: get_rights
           //
           // Returns the accessibility ("RW, "RO", or "WO") of this register in the given ~map~.
           //
           // If no address map is specified and the register is mapped in only one
           // address map, that address map is used. If the register is mapped
           // in more than one address map, the default address map of the
           // parent block is used.
           //
           // Whether a register field can be read or written depends on both the field's
           // configured access policy (see <uvm_reg_field::configure>) and the register's
           // accessibility rights in the map being used to access the field. 
           //
           // If an address map is specified and
           // the register is not mapped in the specified
           // address map, an error message is issued
           // and "RW" is returned. 
           //
           extern virtual function string get_rights (uvm_reg_map map = null);
        
        
           // Function: get_n_bits
           //
           // Returns the width, in bits, of this register.
           //
           extern virtual function int unsigned get_n_bits ();
        
        
           // Function: get_n_bytes
           //
           // Returns the width, in bytes, of this register. Rounds up to
           // next whole byte if register is not a multiple of 8.
           //
           extern virtual function int unsigned get_n_bytes();
        
        
           // Function: get_max_size
           //
           // Returns the maximum width, in bits, of all registers. 
           //
           extern static function int unsigned get_max_size();
        
        
           // Function: get_fields
           //
           // Return the fields in this register
           //
           // Fills the specified array with the abstraction class
           // for all of the fields contained in this register.
           // Fields are ordered from least-significant position to most-significant
           // position within the register. 
           //
           extern virtual function void get_fields (ref uvm_reg_field fields[$]);
        
        
           // Function: get_field_by_name
           //
           // Return the named field in this register
           //
           // Finds a field with the specified name in this register
           // and returns its abstraction class.
           // If no fields are found, returns null. 
           //
           extern virtual function uvm_reg_field get_field_by_name(string name);
        
        
           /*local*/ extern function string Xget_fields_accessX(uvm_reg_map map);
        
        
           // Function: get_offset
           //
           // Returns the offset of this register
           //
           // Returns the offset of this register in an address ~map~.
           //
           // If no address map is specified and the register is mapped in only one
           // address map, that address map is used. If the register is mapped
           // in more than one address map, the default address map of the
           // parent block is used.
           //
           // If an address map is specified and
           // the register is not mapped in the specified
           // address map, an error message is issued.
           //
           extern virtual function uvm_reg_addr_t get_offset (uvm_reg_map map = null);
        
        
           // Function: get_address
           //
           // Returns the base external physical address of this register
           //
           // Returns the base external physical address of this register
           // if accessed through the specified address ~map~.
           //
           // If no address map is specified and the register is mapped in only one
           // address map, that address map is used. If the register is mapped
           // in more than one address map, the default address map of the
           // parent block is used.
           //
           // If an address map is specified and
           // the register is not mapped in the specified
           // address map, an error message is issued.
           //
           extern virtual function uvm_reg_addr_t get_address (uvm_reg_map map = null);
        
        
           // Function: get_addresses
           //
           // Identifies the external physical address(es) of this register
           //
           // Computes all of the external physical addresses that must be accessed
           // to completely read or write this register. The addressed are specified in
           // little endian order.
           // Returns the number of bytes transfered on each access.
           //
           // If no address map is specified and the register is mapped in only one
           // address map, that address map is used. If the register is mapped
           // in more than one address map, the default address map of the
           // parent block is used.
           //
           // If an address map is specified and
           // the register is not mapped in the specified
           // address map, an error message is issued.
           //
           extern virtual function int get_addresses (uvm_reg_map map = null,
                                                      ref uvm_reg_addr_t addr[]);
        
        
        
           //--------------
           // Group: Access
           //--------------
        
        
           // Function: set
           //
           // Set the desired value for this register
           //
           // Sets the desired value of the fields in the register
           // to the specified value. Does not actually
           // set the value of the register in the design,
           // only the desired value in its corresponding
           // abstraction class in the RegModel model.
           // Use the <uvm_reg::update()> method to update the
           // actual register with the mirrored value or
           // the <uvm_reg::write()> method to set
           // the actual register and its mirrored value.
           //
           // Unless this method is used, the desired value is equal to
           // the mirrored value.
           //
           // Refer <uvm_reg_field::set()> for more details on the effect
           // of setting mirror values on fields with different
           // access policies.
           //
           // To modify the mirrored field values to a specific value,
           // and thus use the mirrored as a scoreboard for the register values
           // in the DUT, use the <uvm_reg::predict()> method. 
           //
           extern virtual function void set (uvm_reg_data_t  value,
                                             string          fname = "",
                                             int             lineno = 0);
        
        
           // Function: get
           //
           // Return the desired value of the fields in the register.
           //
           // Does not actually read the value
           // of the register in the design, only the desired value
           // in the abstraction class. Unless set to a different value
           // using the <uvm_reg::set()>, the desired value
           // and the mirrored value are identical.
           //
           // Use the <uvm_reg::read()> or <uvm_reg::peek()>
           // method to get the actual register value. 
           //
           // If the register contains write-only fields, the desired/mirrored
           // value for those fields are the value last written and assumed
           // to reside in the bits implementing these fields.
           // Although a physical read operation would something different
           // for these fields,
           // the returned value is the actual content.
           //
           extern virtual function uvm_reg_data_t  get(string  fname = "",
                                                       int     lineno = 0);
        
           // Function: get_mirrored_value
           //
           // Return the mirrored value of the fields in the register.
           //
           // Does not actually read the value
           // of the register in the design
           //
           // If the register contains write-only fields, the desired/mirrored
           // value for those fields are the value last written and assumed
           // to reside in the bits implementing these fields.
           // Although a physical read operation would something different
           // for these fields, the returned value is the actual content.
           //
           extern virtual function uvm_reg_data_t  get_mirrored_value(string  fname = "",
                                                       int     lineno = 0);
        
        
           // Function: needs_update
           //
           // Returns 1 if any of the fields need updating
           //
           // See <uvm_reg_field::needs_update()> for details.
           // Use the <uvm_reg::update()> to actually update the DUT register.
           //
           extern virtual function bit needs_update(); 
        
        
           // Function: reset
           //
           // Reset the desired/mirrored value for this register.
           //
           // Sets the desired and mirror value of the fields in this register
           // to the reset value for the specified reset ~kind~.
           // See <uvm_reg_field.reset()> for more details.
           //
           // Also resets the semaphore that prevents concurrent access
           // to the register.
           // This semaphore must be explicitly reset if a thread accessing
           // this register array was killed in before the access
           // was completed
           //
           extern virtual function void reset(string kind = "HARD");
        
        
           // Function: get_reset
           //
           // Get the specified reset value for this register
           //
           // Return the reset value for this register
           // for the specified reset ~kind~.
           //
           extern virtual function uvm_reg_data_t
                                     get_reset(string kind = "HARD");
        
        
           // Function: has_reset
           //
           // Check if any field in the register has a reset value specified
           // for the specified reset ~kind~.
           // If ~delete~ is TRUE, removes the reset value, if any.
           //
           extern virtual function bit has_reset(string kind = "HARD",
                                                 bit    delete = 0);
        
        
           // Function: set_reset
           //
           // Specify or modify the reset value for this register
           //
           // Specify or modify the reset value for all the fields in the register
           // corresponding to the cause specified by ~kind~.
           //
           extern virtual function void
                               set_reset(uvm_reg_data_t value,
                                         string         kind = "HARD");
        
        
           // Task: write
           //
           // Write the specified value in this register
           //
           // Write ~value~ in the DUT register that corresponds to this
           // abstraction class instance using the specified access
           // ~path~. 
           // If the register is mapped in more than one address map, 
           // an address ~map~ must be
           // specified if a physical access is used (front-door access).
           // If a back-door access path is used, the effect of writing
           // the register through a physical access is mimicked. For
           // example, read-only bits in the registers will not be written.
           //
           // The mirrored value will be updated using the <uvm_reg::predict()>
           // method.
           //
           extern virtual task write(output uvm_status_e      status,
                                     input  uvm_reg_data_t    value,
                                     input  uvm_path_e        path = UVM_DEFAULT_PATH,
                                     input  uvm_reg_map       map = null,
                                     input  uvm_sequence_base parent = null,
                                     input  int               prior = -1,
                                     input  uvm_object        extension = null,
                                     input  string            fname = "",
                                     input  int               lineno = 0);
        
        
           // Task: read
           //
           // Read the current value from this register
           //
           // Read and return ~value~ from the DUT register that corresponds to this
           // abstraction class instance using the specified access
           // ~path~. 
           // If the register is mapped in more than one address map, 
           // an address ~map~ must be
           // specified if a physical access is used (front-door access).
           // If a back-door access path is used, the effect of reading
           // the register through a physical access is mimicked. For
           // example, clear-on-read bits in the registers will be set to zero.
           //
           // The mirrored value will be updated using the <uvm_reg::predict()>
           // method.
           //
           extern virtual task read(output uvm_status_e      status,
                                    output uvm_reg_data_t    value,
                                    input  uvm_path_e        path = UVM_DEFAULT_PATH,
                                    input  uvm_reg_map       map = null,
                                    input  uvm_sequence_base parent = null,
                                    input  int               prior = -1,
                                    input  uvm_object        extension = null,
                                    input  string            fname = "",
                                    input  int               lineno = 0);
        
        
           // Task: poke
           //
           // Deposit the specified value in this register
           //
           // Deposit the value in the DUT register corresponding to this
           // abstraction class instance, as-is, using a back-door access.
           //
           // Uses the HDL path for the design abstraction specified by ~kind~.
           //
           // The mirrored value will be updated using the <uvm_reg::predict()>
           // method.
           //
           extern virtual task poke(output uvm_status_e      status,
                                    input  uvm_reg_data_t    value,
                                    input  string            kind = "",
                                    input  uvm_sequence_base parent = null,
                                    input  uvm_object        extension = null,
                                    input  string            fname = "",
                                    input  int               lineno = 0);
        
        
           // Task: peek
           //
           // Read the current value from this register
           //
           // Sample the value in the DUT register corresponding to this
           // absraction class instance using a back-door access.
           // The register value is sampled, not modified.
           //
           // Uses the HDL path for the design abstraction specified by ~kind~.
           //
           // The mirrored value will be updated using the <uvm_reg::predict()>
           // method.
           //
           extern virtual task peek(output uvm_status_e      status,
                                    output uvm_reg_data_t    value,
                                    input  string            kind = "",
                                    input  uvm_sequence_base parent = null,
                                    input  uvm_object        extension = null,
                                    input  string            fname = "",
                                    input  int               lineno = 0);
        
        
           // Task: update
           //
           // Updates the content of the register in the design to match the
           // desired value
           //
           // This method performs the reverse
           // operation of <uvm_reg::mirror()>.
           // Write this register if the DUT register is out-of-date with the
           // desired/mirrored value in the abstraction class, as determined by
           // the <uvm_reg::needs_update()> method.
           //
           // The update can be performed using the using the physical interfaces
           // (frontdoor) or <uvm_reg::poke()> (backdoor) access.
           // If the register is mapped in multiple address maps and physical access
           // is used (front-door), an address ~map~ must be specified.
           //
           extern virtual task update(output uvm_status_e      status,
                                      input  uvm_path_e        path = UVM_DEFAULT_PATH,
                                      input  uvm_reg_map       map = null,
                                      input  uvm_sequence_base parent = null,
                                      input  int               prior = -1,
                                      input  uvm_object        extension = null,
                                      input  string            fname = "",
                                      input  int               lineno = 0);
        
        
           // Task: mirror
           //
           // Read the register and update/check its mirror value
           //
           // Read the register and optionally compared the readback value
           // with the current mirrored value if ~check~ is <UVM_CHECK>.
           // The mirrored value will be updated using the <uvm_reg::predict()>
           // method based on the readback value.
           //
           // The mirroring can be performed using the physical interfaces (frontdoor)
           // or <uvm_reg::peek()> (backdoor).
           //
           // If ~check~ is specified as UVM_CHECK,
           // an error message is issued if the current mirrored value
           // does not match the readback value. Any field whose check has been
           // disabled with <uvm_reg_field::set_compare()> will not be considered
           // in the comparison. 
           //
           // If the register is mapped in multiple address maps and physical
           // access is used (front-door access), an address ~map~ must be specified.
           // If the register contains
           // write-only fields, their content is mirrored and optionally
           // checked only if a UVM_BACKDOOR
           // access path is used to read the register. 
           //
           extern virtual task mirror(output uvm_status_e      status,
                                      input uvm_check_e        check  = UVM_NO_CHECK,
                                      input uvm_path_e         path = UVM_DEFAULT_PATH,
                                      input uvm_reg_map        map = null,
                                      input uvm_sequence_base  parent = null,
                                      input int                prior = -1,
                                      input  uvm_object        extension = null,
                                      input string             fname = "",
                                      input int                lineno = 0);
        
        
           // Function: predict
           //
           // Update the mirrored value for this register.
           //
           // Predict the mirror value of the fields in the register
           // based on the specified observed ~value~ on a specified adress ~map~,
           // or based on a calculated value.
           // See <uvm_reg_field::predict()> for more details.
           //
           // Returns TRUE if the prediction was succesful for each field in the
           // register.
           //
           extern virtual function bit predict (uvm_reg_data_t    value,
                                                uvm_reg_byte_en_t be = -1,
                                                uvm_predict_e     kind = UVM_PREDICT_DIRECT,
                                                uvm_path_e        path = UVM_FRONTDOOR,
                                                uvm_reg_map       map = null,
                                                string            fname = "",
                                                int               lineno = 0);
        
        
           // Function: is_busy
           //
           // Returns 1 if register is currently being read or written.
           //
           extern function bit is_busy();
        
        
        
           /*local*/ extern function void Xset_busyX(bit busy);
        
           /*local*/ extern task XreadX (output uvm_status_e      status,
                                         output uvm_reg_data_t    value,
                                         input  uvm_path_e        path,
                                         input  uvm_reg_map       map,
                                         input  uvm_sequence_base parent = null,
                                         input  int               prior = -1,
                                         input  uvm_object        extension = null,
                                         input  string            fname = "",
                                         input  int               lineno = 0);
           
           /*local*/ extern task XatomicX(bit on);
        
           /*local*/ extern virtual function bit Xcheck_accessX
                                        (input uvm_reg_item rw,
                                         output uvm_reg_map_info map_info,
                                         input string caller);
        
           /*local*/ extern function bit Xis_locked_by_fieldX();
        
        
           extern virtual function bit do_check(uvm_reg_data_t expected,
                                                uvm_reg_data_t actual,
                                                uvm_reg_map    map);
        
           extern virtual task do_write(uvm_reg_item rw);
        
           extern virtual task do_read(uvm_reg_item rw);
        
           extern virtual function void do_predict
                                        (uvm_reg_item      rw,
                                         uvm_predict_e     kind = UVM_PREDICT_DIRECT,
                                         uvm_reg_byte_en_t be = -1);
           //-----------------
           // Group: Frontdoor
           //-----------------
        
           // Function: set_frontdoor
           //
           // Set a user-defined frontdoor for this register
           //
           // By default, registers are mapped linearly into the address space
           // of the address maps that instantiate them.
           // If registers are accessed using a different mechanism,
           // a user-defined access
           // mechanism must be defined and associated with
           // the corresponding register abstraction class
           //
           // If the register is mapped in multiple address maps, an address ~map~
           // must be specified.
           //
           extern function void set_frontdoor(uvm_reg_frontdoor ftdr,
                                              uvm_reg_map       map = null,
                                              string            fname = "",
                                              int               lineno = 0);
        
        
           // Function: get_frontdoor
           //
           // Returns the user-defined frontdoor for this register
           //
           // If null, no user-defined frontdoor has been defined.
           // A user-defined frontdoor is defined
           // by using the <uvm_reg::set_frontdoor()> method. 
           //
           // If the register is mapped in multiple address maps, an address ~map~
           // must be specified.
           //
           extern function uvm_reg_frontdoor get_frontdoor(uvm_reg_map map = null);
        
        
           //----------------
           // Group: Backdoor
           //----------------
        
        
           // Function: set_backdoor
           //
           // Set a user-defined backdoor for this register
           //
           // By default, registers are accessed via the built-in string-based
           // DPI routines if an HDL path has been specified using the
           // <uvm_reg::configure()> or <uvm_reg::add_hdl_path()> method.
           //
           // If this default mechanism is not suitable (e.g. because
           // the register is not implemented in pure SystemVerilog)
           // a user-defined access
           // mechanism must be defined and associated with
           // the corresponding register abstraction class
           //
           // A user-defined backdoor is required if active update of the
           // mirror of this register abstraction class, based on observed
           // changes of the corresponding DUT register, is used.
           //
           extern function void set_backdoor(uvm_reg_backdoor bkdr,
                                             string          fname = "",
                                             int             lineno = 0);
           
           
           // Function: get_backdoor
           //
           // Returns the user-defined backdoor for this register
           //
           // If null, no user-defined backdoor has been defined.
           // A user-defined backdoor is defined
           // by using the <uvm_reg::set_backdoor()> method. 
           //
           // If ~inherited~ is TRUE, returns the backdoor of the parent block
           // if none have been specified for this register.
           //
           extern function uvm_reg_backdoor get_backdoor(bit inherited = 1);
        
        
           // Function: clear_hdl_path
           //
           // Delete HDL paths
           //
           // Remove any previously specified HDL path to the register instance
           // for the specified design abstraction.
           //
           extern function void clear_hdl_path (string kind = "RTL");
        
        
           // Function: add_hdl_path
           //
           // Add an HDL path
           //
           // Add the specified HDL path to the register instance for the specified
           // design abstraction. This method may be called more than once for the
           // same design abstraction if the register is physically duplicated
           // in the design abstraction
           //
           // For example, the following register
           //
           //|        1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0
           //| Bits:  5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
           //|       +-+---+-------------+---+-------+
           //|       |A|xxx|      B      |xxx|   C   |
           //|       +-+---+-------------+---+-------+
           //
           // would be specified using the following literal value:
           //
           //| add_hdl_path('{ '{"A_reg", 15, 1},
           //|                 '{"B_reg",  6, 7},
           //|                 '{'C_reg",  0, 4} } );
           //
           // If the register is implementd using a single HDL variable,
           // The array should specify a single slice with its ~offset~ and ~size~
           // specified as -1. For example:
           //
           //| r1.add_hdl_path('{ '{"r1", -1, -1} });
           //
           extern function void add_hdl_path (uvm_hdl_path_slice slices[],
                                              string kind = "RTL");
        
        
           // Function: add_hdl_path_slice
           //
           // Append the specified HDL slice to the HDL path of the register instance
           // for the specified design abstraction.
           // If ~first~ is TRUE, starts the specification of a duplicate
           // HDL implementation of the register.
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
           // Returns TRUE if the register instance has a HDL path defined for the
           // specified design abstraction. If no design abstraction is specified,
           // uses the default design abstraction specified for the parent block.
           //
           extern function bit has_hdl_path (string kind = "");
        
        
           // Function:  get_hdl_path
           //
           // Get the incremental HDL path(s)
           //
           // Returns the HDL path(s) defined for the specified design abstraction
           // in the register instance.
           // Returns only the component of the HDL paths that corresponds to
           // the register, not a full hierarchical path
           //
           // If no design asbtraction is specified, the default design abstraction
           // for the parent block is used.
           //
           extern function void get_hdl_path (ref uvm_hdl_path_concat paths[$],
                                              input string kind = "");
        
        
           // Function:  get_hdl_path_kinds
           //
           // Get design abstractions for which HDL paths have been defined
           //
           extern function void get_hdl_path_kinds (ref string kinds[$]);
        
        
           // Function:  get_full_hdl_path
           //
           // Get the full hierarchical HDL path(s)
           //
           // Returns the full hierarchical HDL path(s) defined for the specified
           // design abstraction in the register instance.
           // There may be more than one path returned even
           // if only one path was defined for the register instance, if any of the
           // parent components have more than one path defined for the same design
           // abstraction
           //
           // If no design asbtraction is specified, the default design abstraction
           // for each ancestor block is used to get each incremental path.
           //
           extern function void get_full_hdl_path (ref uvm_hdl_path_concat paths[$],
                                                   input string kind = "",
                                                   input string separator = ".");
        
        
           // Function: backdoor_read
           //
           // User-define backdoor read access
           //
           // Override the default string-based DPI backdoor access read
           // for this register type.
           // By default calls <uvm_reg::backdoor_read_func()>.
           //
           extern virtual task backdoor_read(uvm_reg_item rw);
        
        
           // Function: backdoor_write
           //
           // User-defined backdoor read access
           //
           // Override the default string-based DPI backdoor access write
           // for this register type.
           //
           extern virtual task backdoor_write(uvm_reg_item rw);
        
        
           // Function: backdoor_read_func
           //
           // User-defined backdoor read access
           //
           // Override the default string-based DPI backdoor access read
           // for this register type.
           //
           extern virtual function uvm_status_e backdoor_read_func(uvm_reg_item rw);
        
        
           // Function: backdoor_watch
           //
           // User-defined DUT register change monitor
           //
           // Watch the DUT register corresponding to this abstraction class
           // instance for any change in value and return when a value-change occurs.
           // This may be implemented a string-based DPI access if the simulation
           // tool provide a value-change callback facility. Such a facility does
           // not exists in the standard SystemVerilog DPI and thus no
           // default implementation for this method can be provided.
           //
%000000    virtual task  backdoor_watch(); endtask
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        
           //----------------
           // Group: Coverage
           //----------------
        
           // Function: include_coverage
           //
           // Specify which coverage model that must be included in
           // various block, register or memory abstraction class instances.
           //
           // The coverage models are specified by or'ing or adding the
           // <uvm_coverage_model_e> coverage model identifiers corresponding to the
           // coverage model to be included.
           //
           // The scope specifies a hierarchical name or pattern identifying
           // a block, memory or register abstraction class instances.
           // Any block, memory or register whose full hierarchical name
           // matches the specified scope will have the specified functional
           // coverage models included in them.
           //
           // The scope can be specified as a POSIX regular expression
           // or simple pattern.
           // See <uvm_resource_base::Scope Interface> for more details.
           //
           //| uvm_reg::include_coverage("*", UVM_CVR_ALL);
           //
           // The specification of which coverage model to include in
           // which abstraction class is stored in a <uvm_reg_cvr_t> resource in the
           // <uvm_resource_db> resource database,
           // in the "uvm_reg::" scope namespace.
           //
           extern static function void include_coverage(string scope,
                                                        uvm_reg_cvr_t models,
                                                        uvm_object accessor = null);
        
           // Function: build_coverage
           //
           // Check if all of the specified coverage models must be built.
           //
           // Check which of the specified coverage model must be built
           // in this instance of the register abstraction class,
           // as specified by calls to <uvm_reg::include_coverage()>.
           //
           // Models are specified by adding the symbolic value of individual
           // coverage model as defined in <uvm_coverage_model_e>.
           // Returns the sum of all coverage models to be built in the
           // register model.
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
           // Check if register has coverage model(s)
           //
           // Returns TRUE if the register abstraction class contains a coverage model
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
           // for this register.
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
           // coverage models that are present in the register abstraction classes,
           // then enabled during construction.
           // See the <uvm_reg::has_coverage()> method to identify
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
           // See <uvm_reg::set_coverage()> for more details. 
           //
           extern virtual function bit get_coverage(uvm_reg_cvr_t is_on);
        
        
           // Function: sample
           //
           // Functional coverage measurement method
           //
           // This method is invoked by the register abstraction class
           // whenever it is read or written with the specified ~data~
           // via the specified address ~map~.
           // It is invoked after the read or write operation has completed
           // but before the mirror has been updated.
           //
           // Empty by default, this method may be extended by the
           // abstraction class generator to perform the required sampling
           // in any provided functional coverage model.
           //
 000250    protected virtual function void sample(uvm_reg_data_t  data,
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                                  uvm_reg_data_t  byte_en,
                                                  bit             is_read,
                                                  uvm_reg_map     map);
           endfunction
        
           // Function: sample_values
           //
           // Functional coverage measurement method for field values
           //
           // This method is invoked by the user
           // or by the <uvm_reg_block::sample_values()> method of the parent block
           // to trigger the sampling
           // of the current field values in the
           // register-level functional coverage model.
           //
           // This method may be extended by the
           // abstraction class generator to perform the required sampling
           // in any provided field-value functional coverage model.
           //
%000000    virtual function void sample_values();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           endfunction
        
 000250    /*local*/ function void XsampleX(uvm_reg_data_t  data,
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                            uvm_reg_data_t  byte_en,
                                            bit             is_read,
                                            uvm_reg_map     map);
 000250       sample(data, byte_en, is_read, map);
+000250  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           endfunction
        
        
           //-----------------
           // Group: Callbacks
           //-----------------
%000001    `uvm_register_cb(uvm_reg, uvm_reg_cbs)
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
        
           // Task: pre_write
           //
           // Called before register write.
           //
           // If the specified data value, access ~path~ or address ~map~ are modified,
           // the updated data value, access path or address map will be used
           // to perform the register operation.
           // If the ~status~ is modified to anything other than <UVM_IS_OK>,
           // the operation is aborted.
           //
           // The registered callback methods are invoked after the invocation
           // of this method.
           // All register callbacks are executed before the corresponding
           // field callbacks
           //
 000050    virtual task pre_write(uvm_reg_item rw); endtask
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        
           // Task: post_write
           //
           // Called after register write.
           //
           // If the specified ~status~ is modified,
           // the updated status will be
           // returned by the register operation.
           //
           // The registered callback methods are invoked before the invocation
           // of this method.
           // All register callbacks are executed before the corresponding
           // field callbacks
           //
 000050    virtual task post_write(uvm_reg_item rw); endtask
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        
           // Task: pre_read
           //
           // Called before register read.
           //
           // If the specified access ~path~ or address ~map~ are modified,
           // the updated access path or address map will be used to perform
           // the register operation.
           // If the ~status~ is modified to anything other than <UVM_IS_OK>,
           // the operation is aborted.
           //
           // The registered callback methods are invoked after the invocation
           // of this method.
           // All register callbacks are executed before the corresponding
           // field callbacks
           //
 000125    virtual task pre_read(uvm_reg_item rw); endtask
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        
           // Task: post_read
           //
           // Called after register read.
           //
           // If the specified readback data or ~status~ is modified,
           // the updated readback data or status will be
           // returned by the register operation.
           //
           // The registered callback methods are invoked before the invocation
           // of this method.
           // All register callbacks are executed before the corresponding
           // field callbacks
           //
 000125    virtual task post_read(uvm_reg_item rw); endtask
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        
           extern virtual function void            do_print (uvm_printer printer);
           extern virtual function string          convert2string();
           extern virtual function uvm_object      clone      ();
           extern virtual function void            do_copy    (uvm_object rhs);
           extern virtual function bit             do_compare (uvm_object  rhs,
                                                               uvm_comparer comparer);
           extern virtual function void            do_pack    (uvm_packer packer);
           extern virtual function void            do_unpack  (uvm_packer packer);
        
        endclass: uvm_reg
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        // new
        
%000004 function uvm_reg::new(string name="", int unsigned n_bits, int has_coverage);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    super.new(name);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    if (n_bits == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       `uvm_error("RegModel", $sformatf("Register \"%s\" cannot have 0 bits", get_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       n_bits = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
%000004    m_n_bits      = n_bits;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_has_cover   = has_coverage;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_atomic      = new(1);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_n_used_bits = 0;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_locked      = 0;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_is_busy     = 0;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_is_locked_by_field = 1'b0;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_hdl_paths_pool = new("hdl_paths");
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000003    if (n_bits > m_max_size)
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000001       m_max_size = n_bits;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
        endfunction: new
        
        
        // configure
        
%000004 function void uvm_reg::configure (uvm_reg_block blk_parent,
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                          uvm_reg_file regfile_parent=null,
                                          string hdl_path = "");
%000004    m_parent = blk_parent;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_parent.add_reg(this);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_regfile_parent = regfile_parent;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    if (hdl_path != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      add_hdl_path_slice(hdl_path, -1, -1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: configure
        
        
        // add_field
        
 000010 function void uvm_reg::add_field(uvm_reg_field field);
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000010    int offset;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000010    int idx;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
~000010    if (m_locked) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       `uvm_error("RegModel", "Cannot add field to locked register model");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
~000010    if (field == null) `uvm_fatal("RegModel", "Attempting to register NULL field");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
           // Store fields in LSB to MSB order
 000010    offset = field.get_lsb_pos();
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000010    idx = -1;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
~000010    foreach (m_fields[i]) begin
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
~000010       if (offset < m_fields[i].get_lsb_pos()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          int j = i;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000          m_fields.insert(j, field);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000          idx = i;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000          break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
              end
           end
~000010    if (idx < 0) begin
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000010       m_fields.push_back(field);
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
 000010       idx = m_fields.size()-1;
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
 000010    m_n_used_bits += field.get_n_bits();
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
           // Check if there are too many fields in the register
~000010    if (m_n_used_bits > m_n_bits) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_error("RegModel",
                 $sformatf("Fields use more bits (%0d) than available in register \"%s\" (%0d)",
%000000             m_n_used_bits, get_name(), m_n_bits));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
           // Check if there are overlapping fields
%000006    if (idx > 0) begin
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000006       if (m_fields[idx-1].get_lsb_pos() +
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000006  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000           m_fields[idx-1].get_n_bits() > offset) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 `uvm_error("RegModel", $sformatf("Field %s overlaps field %s in register \"%s\"",
                                                m_fields[idx-1].get_name(),
%000000                                         field.get_name(), get_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              end
           end
~000010    if (idx < m_fields.size()-1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (offset + field.get_n_bits() >
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000           m_fields[idx+1].get_lsb_pos()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 `uvm_error("RegModel", $sformatf("Field %s overlaps field %s in register \"%s\"",
                                                field.get_name(),
                                                m_fields[idx+1].get_name(),
%000000                                       get_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              end
           end
        endfunction: add_field
        
        
        // Xlock_modelX
        
%000004 function void uvm_reg::Xlock_modelX();
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    if (m_locked)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_locked = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        //----------------------
        // Group- User Frontdoor
        //----------------------
        
        // set_frontdoor
        
%000000 function void uvm_reg::set_frontdoor(uvm_reg_frontdoor ftdr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                             uvm_reg_map       map = null,
                                             string            fname = "",
                                             int               lineno = 0);
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    ftdr.fname = m_fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    ftdr.lineno = m_lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    map = get_local_map(map, "set_frontdoor()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000    map_info = map.get_reg_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    if (map_info == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       map.add_reg(this, -1, "RW", 1, ftdr);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000    else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       map_info.frontdoor = ftdr;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           end
        endfunction: set_frontdoor
        
        
        // get_frontdoor
        
%000000 function uvm_reg_frontdoor uvm_reg::get_frontdoor(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    map = get_local_map(map, "get_frontdoor()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000    map_info = map.get_reg_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return map_info.frontdoor;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: get_frontdoor
        
        
        // set_backdoor
        
%000000 function void uvm_reg::set_backdoor(uvm_reg_backdoor bkdr,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                            string           fname = "",
                                            int              lineno = 0);
%000000    bkdr.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    bkdr.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    if (m_backdoor != null &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000        m_backdoor.has_update_threads()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000       `uvm_warning("RegModel", "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts.");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           end
%000000    m_backdoor = bkdr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: set_backdoor
        
        
        // get_backdoor
        
%000000 function uvm_reg_backdoor uvm_reg::get_backdoor(bit inherited = 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (m_backdoor == null && inherited) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_block blk = get_parent();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_backdoor bkdr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000      while (blk != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000        bkdr = blk.get_backdoor();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000        if (bkdr != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          m_backdoor = bkdr;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000          break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
               end
%000000        blk = blk.get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
             end
           end
%000000    return m_backdoor;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: get_backdoor
        
        
        
        // clear_hdl_path
        
%000000 function void uvm_reg::clear_hdl_path(string kind = "RTL");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   if (kind == "ALL") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000     m_hdl_paths_pool = new("hdl_paths");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
          end
        
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      if (m_regfile_parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000         kind = m_regfile_parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
             else
%000000         kind = m_parent.get_default_hdl_path();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
          end
        
%000000   if (!m_hdl_paths_pool.exists(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000     `uvm_warning("RegModel",{"Unknown HDL Abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
          end
        
%000000   m_hdl_paths_pool.delete(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // add_hdl_path
        
%000000 function void uvm_reg::add_hdl_path(uvm_hdl_path_slice slices[],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                            string kind = "RTL");
%000000     uvm_queue #(uvm_hdl_path_concat) paths = m_hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000     uvm_hdl_path_concat concat = new();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000     concat.set(slices);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000     paths.push_back(concat);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // add_hdl_path_slice
        
%000000 function void uvm_reg::add_hdl_path_slice(string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                                  int offset,
                                                  int size,
%000000                                           bit first = 0,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                           string kind = "RTL");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000     uvm_queue #(uvm_hdl_path_concat) paths = m_hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000     uvm_hdl_path_concat concat;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
            
%000000     if (first || paths.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000        concat = new();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000        paths.push_back(concat);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
            end
            else
%000000        concat = paths.get(paths.size()-1);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    concat.add_path(name, offset, size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // has_hdl_path
        
%000000 function bit  uvm_reg::has_hdl_path(string kind = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      if (m_regfile_parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000         kind = m_regfile_parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
             else
%000000         kind = m_parent.get_default_hdl_path();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
          end
        
%000000   return m_hdl_paths_pool.exists(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_hdl_path_kinds
        
%000000 function void uvm_reg::get_hdl_path_kinds (ref string kinds[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   string kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   kinds.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   if (!m_hdl_paths_pool.first(kind))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000   do
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000     kinds.push_back(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   while (m_hdl_paths_pool.next(kind));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_hdl_path
        
%000000 function void uvm_reg::get_hdl_path(ref uvm_hdl_path_concat paths[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                                input string kind = "");
        
%000000   uvm_queue #(uvm_hdl_path_concat) hdl_paths;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      if (m_regfile_parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000         kind = m_regfile_parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
             else
%000000         kind = m_parent.get_default_hdl_path();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
          end
        
%000000   if (!has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==0) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
            `uvm_error("RegModel",
%000000        {"Register does not have hdl path defined for abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
          end
        
%000000   hdl_paths = m_hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000   for (int i=0; i<hdl_paths.size();i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      paths.push_back(hdl_paths.get(i));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
          end
        
        endfunction
        
        
        // get_full_hdl_path
        
%000000 function void uvm_reg::get_full_hdl_path(ref uvm_hdl_path_concat paths[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                                 input string kind = "",
%000000                                          input string separator = ".");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (m_regfile_parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          kind = m_regfile_parent.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
              else
%000000          kind = m_parent.get_default_hdl_path();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           end
           
%000000    if (!has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==0) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_error("RegModel",
%000000          {"Register ",get_full_name()," does not have hdl path defined for abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       uvm_queue #(uvm_hdl_path_concat) hdl_paths = m_hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       string parent_paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000       if (m_regfile_parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          m_regfile_parent.get_full_hdl_path(parent_paths, kind, separator);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
              else
%000000          m_parent.get_full_hdl_path(parent_paths, kind, separator);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000       for (int i=0; i<hdl_paths.size();i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000          uvm_hdl_path_concat hdl_concat = hdl_paths.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000          foreach (parent_paths[j])  begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000             uvm_hdl_path_concat t = new;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000             foreach (hdl_concat.slices[k]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                if (hdl_concat.slices[k].path == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                   t.add_path(parent_paths[j]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                       else
%000000                   t.add_path({ parent_paths[j], separator, hdl_concat.slices[k].path },
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                              hdl_concat.slices[k].offset,
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                              hdl_concat.slices[k].size);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                    end
%000000             paths.push_back(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                 end
              end
           end
        endfunction
        
        
        // set_offset
        
%000000 function void uvm_reg::set_offset (uvm_reg_map    map,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                           uvm_reg_addr_t offset,
                                           bit unmapped = 0);
        
%000000    uvm_reg_map orig_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (m_maps.num() > 1 && map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_error("RegModel",{"set_offset requires a non-null map when register '",
%000000                  get_full_name(),"' belongs to more than one map."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
%000000    map = get_local_map(map,"set_offset()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           
%000000    map.m_set_reg_offset(this, offset, unmapped);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // set_parent
        
%000000 function void uvm_reg::set_parent(uvm_reg_block blk_parent,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                              uvm_reg_file regfile_parent);
%000000   if (m_parent != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
             // ToDo: remove register from previous parent
          end
%000000   m_parent = blk_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   m_regfile_parent = regfile_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_parent
        
 000254 function uvm_reg_block uvm_reg::get_parent();
+000254  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000254   return get_block();
+000254  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_regfile
        
%000000 function uvm_reg_file uvm_reg::get_regfile();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return m_regfile_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_full_name
        
 000500 function string uvm_reg::get_full_name();
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~000500    if (m_regfile_parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000500  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return {m_regfile_parent.get_full_name(), ".", get_name()};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (m_parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return {m_parent.get_full_name(), ".", get_name()};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           
 000500    return get_name();
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: get_full_name
        
        
        // add_map
        
%000004 function void uvm_reg::add_map(uvm_reg_map map);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004   m_maps[map] = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_maps
        
%000000 function void uvm_reg::get_maps(ref uvm_reg_map maps[$]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    foreach (m_maps[map])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      maps.push_back(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_n_maps
        
%000000 function int uvm_reg::get_n_maps();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return m_maps.num();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // is_in_map
        
%000000 function bit uvm_reg::is_in_map(uvm_reg_map map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    if (m_maps.exists(map))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000    foreach (m_maps[l]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_map local_map = l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_map parent_map = local_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000      while (parent_map != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000        if (parent_map == map)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000        parent_map = parent_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
             end
           end
%000000    return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        
        // get_local_map
        
 001583 function uvm_reg_map uvm_reg::get_local_map(uvm_reg_map map, string caller="");
+001583  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
~001283    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+001283  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return get_default_map();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000    if (m_maps.exists(map))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return map; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
~001583    foreach (m_maps[l]) begin
+001583  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_map local_map=l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_map parent_map = local_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000      while (parent_map != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000        if (parent_map == map)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          return local_map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000        parent_map = parent_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
             end
           end
           `uvm_warning("RegModel", 
               {"Register '",get_full_name(),"' is not contained within map '",map.get_full_name(),"'",
~001583         (caller == "" ? "": {" (called from ",caller,")"}) })
+001583  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((caller == %22%22)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((caller == %22%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 001583    return null;
+001583  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        
        // get_default_map
        
~000300 function uvm_reg_map uvm_reg::get_default_map(string caller="");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000300  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // if reg is not associated with any map, return null
~000300    if (m_maps.num() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000300  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_warning("RegModel", 
                {"Register '",get_full_name(),"' is not registered with any map",
%000000          (caller == "" ? "": {" (called from ",caller,")"})})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((caller == %22%22)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((caller == %22%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
           // if only one map, choose that
%000000    if (m_maps.num() == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_map map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000      void'(m_maps.first(map));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
           // try to choose one based on default_map in parent blocks.
~000300    foreach (m_maps[l]) begin
+000300  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_map map = l;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_block blk = map.get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_map default_map = blk.get_default_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      if (default_map != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000        uvm_reg_map local_map = get_local_map(default_map,"get_default_map()");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000        if (local_map != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          return local_map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
             end
           end
        
           // if that fails, choose the first in this reg's maps
        
 000300    begin
+000300  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000300      uvm_reg_map map;
+000300  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000300      void'(m_maps.first(map));
+000300  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000300      return map;
+000300  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
        endfunction
        
        
        // get_rights
        
 001158 function string uvm_reg::get_rights(uvm_reg_map map = null);
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 001158    uvm_reg_map_info info;
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 001158    map = get_local_map(map,"get_rights()");
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~001158    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+001158  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return "RW";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
 001158    info = map.get_reg_map_info(this);
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 001158    return info.rights;
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        endfunction
        
        
        
        // get_block
        
 000254 function uvm_reg_block uvm_reg::get_block();
+000254  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000254    get_block = m_parent;
+000254  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_offset
        
%000000 function uvm_reg_addr_t uvm_reg::get_offset(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_map orig_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    map = get_local_map(map,"get_offset()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           
%000000    map_info = map.get_reg_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
%000000    if (map_info.unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_warning("RegModel", {"Register '",get_name(),
                           "' is unmapped in map '",
%000000                    ((orig_map == null) ? map.get_full_name() : orig_map.get_full_name()),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
                 
%000000    return map_info.offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        endfunction
        
        
        // get_addresses
        
%000000 function int uvm_reg::get_addresses(uvm_reg_map map=null, ref uvm_reg_addr_t addr[]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_map system_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_map orig_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    map = get_local_map(map,"get_addresses()");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    map_info = map.get_reg_map_info(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (map_info.unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_warning("RegModel", {"Register '",get_name(),
                           "' is unmapped in map '",
%000000                    ((orig_map == null) ? map.get_full_name() : orig_map.get_full_name()),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return -1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
         
%000000    addr = map_info.addr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    system_map = map.get_root_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return map.get_n_bytes();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        endfunction
        
        
        // get_address
        
%000000 function uvm_reg_addr_t uvm_reg::get_address(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_addr_t  addr[];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    void'(get_addresses(map,addr));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return addr[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_n_bits
        
 000175 function int unsigned uvm_reg::get_n_bits();
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000175    return m_n_bits;
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_n_bytes
        
%000004 function int unsigned uvm_reg::get_n_bytes();
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    return ((m_n_bits-1) / 8) + 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_max_size
        
%000001 function int unsigned uvm_reg::get_max_size();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000001    return m_max_size;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: get_max_size
        
        
        // get_fields
        
 000050 function void uvm_reg::get_fields(ref uvm_reg_field fields[$]);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100    foreach(m_fields[i])
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100       fields.push_back(m_fields[i]);
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // get_field_by_name
        
%000000 function uvm_reg_field uvm_reg::get_field_by_name(string name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    foreach (m_fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (m_fields[i].get_name() == name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          return m_fields[i];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           `uvm_warning("RegModel", {"Unable to locate field '",name,
%000000                             "' in register '",get_name(),"'"})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // Xget_field_accessX
        //
        // Returns "WO" if all of the fields in the registers are write-only
        // Returns "RO" if all of the fields in the registers are read-only
        // Returns "RW" otherwise.
        
%000004 function string uvm_reg::Xget_fields_accessX(uvm_reg_map map);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    bit is_R;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    bit is_W;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
%000006    foreach(m_fields[i]) begin
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000006       case (m_fields[i].get_access(map))
-000006  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
               "RO",
                 "RC",
%000006          "RS":
-000006  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000006             is_R = 1;
-000006  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
               
               "WO",
                  "WOC",
                  "WOS",
%000000           "WO1":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000              is_W = 1;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
               
%000000        default:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000           return "RW";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
              endcase
              
%000006       if (is_R && is_W) return "RW";
-000000  point: type=expr comment=(is_R==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(is_R==1 && is_W==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000006  point: type=expr comment=(is_W==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000006  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
%000004    case ({is_R, is_W})
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000     2'b01: return "WO";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000     2'b10: return "RO";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
           endcase
%000004    return "RW";
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
              
        //---------
        // COVERAGE
        //---------
        
        
        // include_coverage
        
%000000 function void uvm_reg::include_coverage(string scope,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                                uvm_reg_cvr_t models,
                                                uvm_object accessor = null);
%000000    uvm_reg_cvr_rsrc_db::set({"uvm_reg::", scope},
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                             "include_coverage",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                             models, accessor);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // build_coverage
        
%000000 function uvm_reg_cvr_t uvm_reg::build_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    build_coverage = UVM_NO_COVERAGE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    void'(uvm_reg_cvr_rsrc_db::read_by_name({"uvm_reg::", get_full_name()},
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                            "include_coverage",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                            build_coverage, this));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return build_coverage & models;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: build_coverage
        
        
        // add_coverage
        
%000000 function void uvm_reg::add_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    m_has_cover |= models;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: add_coverage
        
        
        // has_coverage
        
%000000 function bit uvm_reg::has_coverage(uvm_reg_cvr_t models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return ((m_has_cover & models) == models);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: has_coverage
        
        
        // set_coverage
        
%000000 function uvm_reg_cvr_t uvm_reg::set_coverage(uvm_reg_cvr_t is_on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    if (is_on == uvm_reg_cvr_t'(UVM_NO_COVERAGE)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       m_cover_on = is_on;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return m_cover_on;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
%000000    m_cover_on = m_has_cover & is_on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    return m_cover_on;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: set_coverage
        
        
        // get_coverage
        
%000000 function bit uvm_reg::get_coverage(uvm_reg_cvr_t is_on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    if (has_coverage(is_on) == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000    return ((m_cover_on & is_on) == is_on);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: get_coverage
        
        
        
        //---------
        // ACCESS
        //---------
        
        
        // set
        
 000050 function void uvm_reg::set(uvm_reg_data_t  value,
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050                            string          fname = "",
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050                            int             lineno = 0);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           // Split the value into the individual fields
 000050    m_fname = fname;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    m_lineno = lineno;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~000100    foreach (m_fields[i])
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+000100  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000100       m_fields[i].set((value >> m_fields[i].get_lsb_pos()) &
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                               ((1 << m_fields[i].get_n_bits()) - 1));
        endfunction: set
        
        
        // predict
        
 000325 function bit uvm_reg::predict (uvm_reg_data_t    value,
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                       uvm_reg_byte_en_t be = -1,
                                       uvm_predict_e     kind = UVM_PREDICT_DIRECT,
                                       uvm_path_e        path = UVM_FRONTDOOR,
                                       uvm_reg_map       map = null,
                                       string            fname = "",
                                       int               lineno = 0);
 000325   uvm_reg_item rw = new;
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000325   rw.value[0] = value;
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000325   rw.path = path;
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000325   rw.map = map;
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000325   rw.fname = fname;
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000325   rw.lineno = lineno;
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000325   do_predict(rw, kind, be);
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000325   predict = (rw.status == UVM_NOT_OK) ? 0 : 1;
+000325  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: predict
        
        
        // do_predict
        
 000575 function void uvm_reg::do_predict(uvm_reg_item      rw,
+000575  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                          uvm_predict_e     kind = UVM_PREDICT_DIRECT,
%000000                                   uvm_reg_byte_en_t be = -1);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000575    uvm_reg_data_t reg_value = rw.value[0];
+000575  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000575    m_fname = rw.fname;
+000575  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000575    m_lineno = rw.lineno;
+000575  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000575    rw.status = UVM_IS_OK;
+000575  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~000325    if (m_is_busy && kind == UVM_PREDICT_DIRECT) begin
+000250  point: type=expr comment=((kind == uvm_pkg::UVM_PREDICT_DIRECT)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_busy==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
+000325  point: type=expr comment=(m_is_busy==1 && (kind == uvm_pkg::UVM_PREDICT_DIRECT)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000250  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_warning("RegModel", {"Trying to predict value of register '",
~000325                   get_full_name(),"' while it is being accessed"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000325  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
           
~001000    foreach (m_fields[i]) begin
+000575  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+001000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+001000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 001000       rw.value[0] = (reg_value >> m_fields[i].get_lsb_pos()) &
+001000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                         ((1 << m_fields[i].get_n_bits())-1);
 001000       m_fields[i].do_predict(rw, kind, be>>(m_fields[i].get_lsb_pos()/8));
+001000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
 000575    rw.value[0] = reg_value;
+000575  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        endfunction: do_predict
        
        
        // get
        
%000000 function uvm_reg_data_t  uvm_reg::get(string  fname = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                       int     lineno = 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           // Concatenate the value of the individual fields
           // to form the register value
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    get = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
%000000    foreach (m_fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       get |= m_fields[i].get() << m_fields[i].get_lsb_pos();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: get
        
        
        // get_mirrored_value
        
%000000 function uvm_reg_data_t  uvm_reg::get_mirrored_value(string  fname = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                       int     lineno = 0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           // Concatenate the value of the individual fields
           // to form the register value
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    get_mirrored_value = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
%000000    foreach (m_fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       get_mirrored_value |= m_fields[i].get_mirrored_value() << m_fields[i].get_lsb_pos();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: get_mirrored_value
        
        
        // reset
        
%000004 function void uvm_reg::reset(string kind = "HARD");
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
~000010    foreach (m_fields[i])
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000010       m_fields[i].reset(kind);
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           // Put back a key in the semaphore if it is checked out
           // in case a thread was killed during an operation
%000004    void'(m_atomic.try_get(1));
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_atomic.put(1);
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000004    m_process = null;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: reset
        
        
        // get_reset
        
%000000 function uvm_reg_data_t uvm_reg::get_reset(string kind = "HARD");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           // Concatenate the value of the individual fields
           // to form the register value
%000000    get_reset = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
%000000    foreach (m_fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       get_reset |= m_fields[i].get_reset(kind) << m_fields[i].get_lsb_pos();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction: get_reset
        
        
        // has_reset
        
%000000 function bit uvm_reg::has_reset(string kind = "HARD",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                        bit    delete = 0);
        
%000000    has_reset = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    foreach (m_fields[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       has_reset |= m_fields[i].has_reset(kind, delete);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (!delete && has_reset)
-000000  point: type=expr comment=(delete==0 && has_reset==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(delete==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(has_reset==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000         return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        endfunction: has_reset
        
        
        // set_reset
        
%000000 function void uvm_reg::set_reset(uvm_reg_data_t value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                         string         kind = "HARD");
%000000    foreach (m_fields[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       m_fields[i].set_reset(value >> m_fields[i].get_lsb_pos(), kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           end
        endfunction: set_reset
        
        
        //-----------
        // BUS ACCESS
        //-----------
        
        // needs_update
        
%000000 function bit uvm_reg::needs_update();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    needs_update = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    foreach (m_fields[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (m_fields[i].needs_update()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
              end
           end
        endfunction: needs_update
        
        
        // update
        
%000000 task uvm_reg::update(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                             input  uvm_path_e        path = UVM_DEFAULT_PATH,
                             input  uvm_reg_map       map = null,
                             input  uvm_sequence_base parent = null,
                             input  int               prior = -1,
                             input  uvm_object        extension = null,
                             input  string            fname = "",
                             input  int               lineno = 0);
%000000    uvm_reg_data_t upd;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (!needs_update()) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(needs_update()==0) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(needs_update()==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
        
           // Concatenate the write-to-update values from each field
           // Fields are stored in LSB or MSB order
%000000    upd = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    foreach (m_fields[i])
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       upd |= m_fields[i].XupdateX() << m_fields[i].get_lsb_pos();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    write(status, upd, path, map, parent, prior, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endtask: update
        
        
        
        // write
        
 000050 task uvm_reg::write(output uvm_status_e      status,
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                            input  uvm_reg_data_t    value,
                            input  uvm_path_e        path = UVM_DEFAULT_PATH,
                            input  uvm_reg_map       map = null,
                            input  uvm_sequence_base parent = null,
                            input  int               prior = -1,
                            input  uvm_object        extension = null,
                            input  string            fname = "",
                            input  int               lineno = 0);
        
           // create an abstract transaction for this operation
 000050    uvm_reg_item rw;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    XatomicX(1);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    set(value);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    rw = uvm_reg_item::type_id::create("write_item",,get_full_name());
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.element      = this;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.element_kind = UVM_REG;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.kind         = UVM_WRITE;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.value[0]     = value;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.path         = path;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.map          = map;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.parent       = parent;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.prior        = prior;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.extension    = extension;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.fname        = fname;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.lineno       = lineno;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    do_write(rw);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    status = rw.status;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    XatomicX(0);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        endtask
        
        
        // do_write
        
 000050 task uvm_reg::do_write (uvm_reg_item rw);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    uvm_reg_cb_iter  cbs = new(this);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    uvm_reg_map_info map_info;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    uvm_reg_data_t   value; 
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    m_fname  = rw.fname;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    m_lineno = rw.lineno;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~000050    if (!Xcheck_accessX(rw,map_info,"write()"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    XatomicX(1);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    m_write_in_progress = 1'b1;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    rw.value[0] &= ((1 << m_n_bits)-1);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    value = rw.value[0];
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    rw.status = UVM_IS_OK;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // PRE-WRITE CBS - FIELDS
 000050    begin : pre_write_callbacks
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050       uvm_reg_data_t  msk;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050       int lsb;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~000100       foreach (m_fields[i]) begin
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+000100  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000100          uvm_reg_field_cb_iter cbs = new(m_fields[i]);
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100          uvm_reg_field f = m_fields[i];
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100          lsb = f.get_lsb_pos();
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100          msk = ((1<<f.get_n_bits())-1) << lsb;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100          rw.value[0] = (value & msk) >> lsb;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100          f.pre_write(rw);
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
~000100          for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next()) begin
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000             rw.element = f;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000             rw.element_kind = UVM_FIELD;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000             cb.pre_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                 end
        
 000100          value = (value & ~msk) | (rw.value[0] << lsb);
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
              end
           end
 000050    rw.element = this;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.element_kind = UVM_REG;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.value[0] = value;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // PRE-WRITE CBS - REG
 000050    pre_write(rw);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
~000050    for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       cb.pre_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~000050    if (rw.status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      m_write_in_progress = 1'b0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000      XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
                 
           // EXECUTE WRITE...
 000050    case (rw.path)
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
              
              // ...VIA USER BACKDOOR
%000000       UVM_BACKDOOR: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000          uvm_reg_data_t final_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000          uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000          value = rw.value[0];
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
                 // Mimick the final value after a physical read
%000000          rw.kind = UVM_READ;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000          if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000            bkdr.read(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 else
%000000            backdoor_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000          if (rw.status == UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000            m_write_in_progress = 1'b0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000            return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 end
        
%000000          begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000             foreach (m_fields[i]) begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                uvm_reg_data_t field_val;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                int lsb = m_fields[i].get_lsb_pos();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                int sz  = m_fields[i].get_n_bits();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                field_val = m_fields[i].XpredictX((rw.value[0] >> lsb) & ((1<<sz)-1),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                                  (value >> lsb) & ((1<<sz)-1),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                                  rw.local_map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                final_val |= field_val << lsb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                    end
                 end
%000000          rw.kind = UVM_WRITE;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000          rw.value[0] = final_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000          if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000            bkdr.write(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 else
%000000            backdoor_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000          do_predict(rw, UVM_PREDICT_WRITE);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
              end
        
 000050       UVM_FRONTDOOR: begin
+000050  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050          uvm_reg_map system_map = rw.local_map.get_root_map();
+000050  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050          m_is_busy = 1;
+000050  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
                 // ...VIA USER FRONTDOOR
~000050          if (map_info.frontdoor != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000             uvm_reg_frontdoor fd = map_info.frontdoor;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             fd.rw_info = rw;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             if (fd.sequencer == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000               fd.sequencer = system_map.get_sequencer();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             fd.start(fd.sequencer, rw.parent);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 end
        
                 // ...VIA BUILT-IN FRONTDOOR
 000050          else begin : built_in_frontdoor
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050             rw.local_map.do_write(rw);
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
                 end
        
 000050          m_is_busy = 0;
+000050  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
~000050          if (system_map.get_auto_predict()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000             uvm_status_e status;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             if (rw.status != UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                sample(value, -1, 0, rw.map);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                m_parent.XsampleX(map_info.offset, 0, rw.map);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                    end
        
%000000             status = rw.status; // do_predict will override rw.status, so we save it here
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             do_predict(rw, UVM_PREDICT_WRITE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             rw.status = status;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 end
              end
              
           endcase
        
 000050    value = rw.value[0];
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // POST-WRITE CBS - REG
~000050    for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       cb.post_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    post_write(rw);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // POST-WRITE CBS - FIELDS
~000100    foreach (m_fields[i]) begin
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+000100  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000100       uvm_reg_field_cb_iter cbs = new(m_fields[i]);
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100       uvm_reg_field f = m_fields[i];
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
              
 000100       rw.element = f;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100       rw.element_kind = UVM_FIELD;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100       rw.value[0] = (value >> f.get_lsb_pos()) & ((1<<f.get_n_bits())-1);
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
              
~000100       for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000          cb.post_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100       f.post_write(rw);
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           end
           
 000050    rw.value[0] = value;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.element = this;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000050    rw.element_kind = UVM_REG;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // REPORT
~000050    if (uvm_report_enabled(UVM_HIGH, UVM_INFO, "RegModel")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      string path_s,value_s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000      if (rw.path == UVM_FRONTDOOR)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000        path_s = (map_info.frontdoor != null) ? "user frontdoor" :
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                                                       {"map ",rw.map.get_full_name()};
             else
%000000        path_s = (get_backdoor() != null) ? "user backdoor" : "DPI backdoor";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) != null)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) != null)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000      value_s = $sformatf("=0x%0h",rw.value[0]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000       uvm_report_info("RegModel", {"Wrote register via ",path_s,": ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                    get_full_name(),value_s}, UVM_HIGH);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
 000050    m_write_in_progress = 1'b0;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000050    XatomicX(0);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        endtask: do_write
        
        // read
        
 000125 task uvm_reg::read(output uvm_status_e      status,
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125                    output uvm_reg_data_t    value,
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                           input  uvm_path_e        path = UVM_DEFAULT_PATH,
                           input  uvm_reg_map       map = null,
                           input  uvm_sequence_base parent = null,
                           input  int               prior = -1,
                           input  uvm_object        extension = null,
                           input  string            fname = "",
                           input  int               lineno = 0);
 000125    XatomicX(1);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    XreadX(status, value, path, map, parent, prior, extension, fname, lineno);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    XatomicX(0);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endtask: read
        
        
        // XreadX
        
 000125 task uvm_reg::XreadX(output uvm_status_e      status,
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125                      output uvm_reg_data_t    value,
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                             input  uvm_path_e        path,
                             input  uvm_reg_map       map,
                             input  uvm_sequence_base parent = null,
                             input  int               prior = -1,
                             input  uvm_object        extension = null,
                             input  string            fname = "",
                             input  int               lineno = 0);
           
           // create an abstract transaction for this operation
 000125    uvm_reg_item rw;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw = uvm_reg_item::type_id::create("read_item",,get_full_name());
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.element      = this;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.element_kind = UVM_REG;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.kind         = UVM_READ;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.value[0]     = 0;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.path         = path;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.map          = map;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.parent       = parent;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.prior        = prior;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.extension    = extension;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.fname        = fname;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.lineno       = lineno;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000125    do_read(rw);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000125    status = rw.status;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    value = rw.value[0];
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        endtask: XreadX
        
        
        // do_read
        
 000125 task uvm_reg::do_read(uvm_reg_item rw);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000125    uvm_reg_cb_iter  cbs = new(this);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    uvm_reg_map_info map_info;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    uvm_reg_data_t   value;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    uvm_reg_data_t   exp;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000125    m_fname   = rw.fname;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    m_lineno  = rw.lineno;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           
~000125    if (!Xcheck_accessX(rw,map_info,"read()"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
 000125    m_read_in_progress = 1'b1;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000125    rw.status = UVM_IS_OK;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // PRE-READ CBS - FIELDS
~000500    foreach (m_fields[i]) begin
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+000500  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000500       uvm_reg_field_cb_iter cbs = new(m_fields[i]);
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000500       uvm_reg_field f = m_fields[i];
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000500       rw.element = f;
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000500       rw.element_kind = UVM_FIELD;
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000500       m_fields[i].pre_read(rw);
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
~000500       for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000          cb.pre_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
 000125    rw.element = this;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.element_kind = UVM_REG;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // PRE-READ CBS - REG
 000125    pre_read(rw);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
~000125    for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       cb.pre_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~000125    if (rw.status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      m_read_in_progress = 1'b0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
                 
           // EXECUTE READ...
 000125    case (rw.path)
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
              
              // ...VIA USER BACKDOOR
%000000       UVM_BACKDOOR: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000          uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000          uvm_reg_map map = uvm_reg_map::backdoor();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
%000000          if (map.get_check_on_read()) exp = get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           
%000000          if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000            bkdr.read(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 else
%000000            backdoor_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000          value = rw.value[0];
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
                 // Need to clear RC fields, set RS fields and mask WO fields
%000000          if (rw.status != UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000             uvm_reg_data_t wo_mask;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000             foreach (m_fields[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                string acc = m_fields[i].get_access(uvm_reg_map::backdoor());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                if (acc == "RC" ||
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg__Vclpkg
                           acc == "WRC" ||
                           acc == "WSRC" ||
%000000                    acc == "W1SRC" ||
-000000  point: type=expr comment=((acc == %22RC%22)==0 && (acc == %22WRC%22)==0 && (acc == %22WSRC%22)==0 && (acc == %22W1SRC%22)==0 && (acc == %22W0SRC%22)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22RC%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22W0SRC%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22W1SRC%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22WRC%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22WSRC%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
%000000                    acc == "W0SRC") begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg__Vclpkg
%000000                   value &= ~(((1<<m_fields[i].get_n_bits())-1)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg__Vclpkg
                                                  << m_fields[i].get_lsb_pos());
                       end
%000000                else if (acc == "RS" ||
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg__Vclpkg
                                acc == "WRS" ||
                                acc == "WCRS" ||
%000000                         acc == "W1CRS" ||
-000000  point: type=expr comment=((acc == %22RS%22)==0 && (acc == %22WRS%22)==0 && (acc == %22WCRS%22)==0 && (acc == %22W1CRS%22)==0 && (acc == %22W0CRS%22)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22RS%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22W0CRS%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22W1CRS%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22WCRS%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22WRS%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
%000000                         acc == "W0CRS") begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg__Vclpkg
%000000                   value |= (((1<<m_fields[i].get_n_bits())-1)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg__Vclpkg
                                                  << m_fields[i].get_lsb_pos());
                       end
%000000                else if (acc == "WO" ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                                acc == "WOC" ||
%000000                         acc == "WOS" ||
-000000  point: type=expr comment=((acc == %22WO%22)==0 && (acc == %22WOC%22)==0 && (acc == %22WOS%22)==0 && (acc == %22WO1%22)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22WO%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22WO1%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22WOC%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((acc == %22WOS%22)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
%000000                         acc == "WO1") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                   wo_mask |= ((1<<m_fields[i].get_n_bits())-1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                                                  << m_fields[i].get_lsb_pos();
                       end
                    end
        
%000000             if (value != rw.value[0]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000               uvm_reg_data_t saved;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000               saved = rw.value[0];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000               rw.value[0] = value;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000               if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                  bkdr.write(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                      else
%000000                  backdoor_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000               rw.value[0] = saved;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                    end
        
%000000             rw.value[0] &= ~wo_mask;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000             if (map.get_check_on_read() &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                rw.status != UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                void'(do_check(exp, rw.value[0], map));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                    end
               
%000000             do_predict(rw, UVM_PREDICT_READ);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 end
              end
        
        
 000125       UVM_FRONTDOOR: begin
+000125  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
 000125          uvm_reg_map system_map = rw.local_map.get_root_map();
+000125  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
 000125          m_is_busy = 1;
+000125  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
~000125          if (rw.local_map.get_check_on_read()) exp = get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           
                 // ...VIA USER FRONTDOOR
~000125          if (map_info.frontdoor != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000             uvm_reg_frontdoor fd = map_info.frontdoor;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             fd.rw_info = rw;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             if (fd.sequencer == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000               fd.sequencer = system_map.get_sequencer();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             fd.start(fd.sequencer, rw.parent);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 end
        
                 // ...VIA BUILT-IN FRONTDOOR
 000125          else begin
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000125             rw.local_map.do_read(rw);
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                 end
        
 000125          m_is_busy = 0;
+000125  point: type=line comment=case hier=uvm_pkg::uvm_reg__Vclpkg
        
~000125          if (system_map.get_auto_predict()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000             uvm_status_e status;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             if (rw.local_map.get_check_on_read() &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                 rw.status != UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                void'(do_check(exp, rw.value[0], system_map));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                    end
        
%000000             if (rw.status != UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000                sample(rw.value[0], -1, 1, rw.map);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                m_parent.XsampleX(map_info.offset, 1, rw.map);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                    end
        
%000000             status = rw.status; // do_predict will override rw.status, so we save it here
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             do_predict(rw, UVM_PREDICT_READ);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000             rw.status = status;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                 end
              end
              
           endcase
        
 000125    value = rw.value[0]; // preserve 
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // POST-READ CBS - REG
~000125    for (uvm_reg_cbs cb = cbs.first(); cb != null; cb = cbs.next())
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       cb.post_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    post_read(rw);
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // POST-READ CBS - FIELDS
~000500    foreach (m_fields[i]) begin
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
+000500  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000500       uvm_reg_field_cb_iter cbs = new(m_fields[i]);
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000500       uvm_reg_field f = m_fields[i];
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000500       rw.element = f;
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000500       rw.element_kind = UVM_FIELD;
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000500       rw.value[0] = (value >> f.get_lsb_pos()) & ((1<<f.get_n_bits())-1);
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
~000500       for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000          cb.post_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000500       f.post_read(rw);
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
 000125    rw.value[0] = value; // restore
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.element = this;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000125    rw.element_kind = UVM_REG;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           // REPORT
~000125    if (uvm_report_enabled(UVM_HIGH, UVM_INFO, "RegModel")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000125  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      string path_s,value_s;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000      if (rw.path == UVM_FRONTDOOR)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000        path_s = (map_info.frontdoor != null) ? "user frontdoor" :
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                                                       {"map ",rw.map.get_full_name()};
             else
%000000        path_s = (get_backdoor() != null) ? "user backdoor" : "DPI backdoor";
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) != null)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) != null)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000      value_s = $sformatf("=%0h",rw.value[0]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000       uvm_report_info("RegModel", {"Read  register via ",path_s,": ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                                    get_full_name(),value_s}, UVM_HIGH);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
 000125    m_read_in_progress = 1'b0;
+000125  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        endtask: do_read
        
        
        // Xcheck_accessX
        
 000175 function bit uvm_reg::Xcheck_accessX (input uvm_reg_item rw,
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000175                                       output uvm_reg_map_info map_info,
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                              input string caller);
        
        
~000175    if (rw.path == UVM_DEFAULT_PATH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      rw.path = m_parent.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
~000175    if (rw.path == UVM_BACKDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (get_backdoor() == null && !has_hdl_path()) begin
-000000  point: type=expr comment=((get_backdoor(1'h1) == null)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((get_backdoor(1'h1) == null)==1 && has_hdl_path(%22%22)==0) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(%22%22)==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                 `uvm_warning("RegModel",
                    {"No backdoor access available for register '",get_full_name(),
%000000             "' . Using frontdoor instead."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          rw.path = UVM_FRONTDOOR;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
              end
              else
%000000         rw.map = uvm_reg_map::backdoor();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
        
~000175    if (rw.path != UVM_BACKDOOR) begin
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
 000175      rw.local_map = get_local_map(rw.map,caller);
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
~000175      if (rw.local_map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                `uvm_error(get_type_name(), 
                   {"No transactor available to physically access register on map '",
%000000             rw.map.get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000         rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000         return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
             end
        
 000175      map_info = rw.local_map.get_reg_map_info(this);
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
~000175      if (map_info.frontdoor == null && map_info.unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                  `uvm_error("RegModel", {"Register '",get_full_name(),
                     "' unmapped in map '",
                     (rw.map==null)? rw.local_map.get_full_name():rw.map.get_full_name(),
%000000              "' and does not have a user-defined frontdoor"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000           rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000           return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
             end
        
~000175      if (rw.map == null)
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000175        rw.map = rw.local_map;
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
 000175    return 1;
+000175  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // is_busy
        
 000100 function bit uvm_reg::is_busy();
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000100    return m_is_busy;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
            
        
        // Xset_busyX
        
%000000 function void uvm_reg::Xset_busyX(bit busy);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    m_is_busy = busy;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
            
        
        // Xis_loacked_by_fieldX
        
%000000 function bit uvm_reg::Xis_locked_by_fieldX();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   return m_is_locked_by_field;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
            
        
        // backdoor_write
        
%000000 task  uvm_reg::backdoor_write(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   uvm_hdl_path_concat paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   bit ok=1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   get_full_hdl_path(paths,rw.bd_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   foreach (paths[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_hdl_path_concat hdl_concat = paths[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      foreach (hdl_concat.slices[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                `uvm_info("RegMem", {"backdoor_write to ",
%000000                   hdl_concat.slices[j].path},UVM_DEBUG)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000         if (hdl_concat.slices[j].offset < 0) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000            ok &= uvm_hdl_deposit(hdl_concat.slices[j].path,rw.value[0]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000            continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                end
%000000         begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000            uvm_reg_data_t slice;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000            slice = rw.value[0] >> hdl_concat.slices[j].offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000            slice &= (1 << hdl_concat.slices[j].size)-1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000            ok &= uvm_hdl_deposit(hdl_concat.slices[j].path, slice);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                end
             end
          end
%000000   rw.status = (ok ? UVM_IS_OK : UVM_NOT_OK);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(ok==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(ok==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
        endtask
        
        
        // backdoor_read
        
%000000 task  uvm_reg::backdoor_read (uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   rw.status = backdoor_read_func(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endtask
        
        
        // backdoor_read_func
        
%000000 function uvm_status_e uvm_reg::backdoor_read_func(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   uvm_hdl_path_concat paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   uvm_reg_data_t val;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   bit ok=1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   get_full_hdl_path(paths,rw.bd_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   foreach (paths[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_hdl_path_concat hdl_concat = paths[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      val = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      foreach (hdl_concat.slices[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                `uvm_info("RegMem", {"backdoor_read from %s ",
%000000                hdl_concat.slices[j].path},UVM_DEBUG)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000         if (hdl_concat.slices[j].offset < 0) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000            ok &= uvm_hdl_read(hdl_concat.slices[j].path,val);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000            continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                end
%000000         begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000            uvm_reg_data_t slice;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000            int k = hdl_concat.slices[j].offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                   
%000000            ok &= uvm_hdl_read(hdl_concat.slices[j].path, slice);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
              
%000000            repeat (hdl_concat.slices[j].size) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000               val[k++] = slice[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000               slice >>= 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                   end
                end
             end
        
%000000      val &= (1 << m_n_bits)-1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000      if (i == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000         rw.value[0] = val;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000      if (val != rw.value[0]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                `uvm_error("RegModel", $sformatf("Backdoor read of register %s with multiple HDL copies: values are not the same: %0h at path '%s', and %0h at path '%s'. Returning first value.",
                       get_full_name(),
                       rw.value[0], uvm_hdl_concat2string(paths[0]),
%000000                val, uvm_hdl_concat2string(paths[i]))); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000         return UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
              end
              `uvm_info("RegMem", 
%000000          $sformatf("returned backdoor value 0x%0x",rw.value[0]),UVM_DEBUG);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              
          end
        
%000000   rw.status = (ok) ? UVM_IS_OK : UVM_NOT_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(ok==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(ok==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
%000000   return rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // poke
        
%000000 task uvm_reg::poke(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                           input  uvm_reg_data_t    value,
                           input  string            kind = "",
                           input  uvm_sequence_base parent = null,
                           input  uvm_object        extension = null,
                           input  string            fname = "",
                           input  int               lineno = 0);
        
%000000    uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        
%000000    if (bkdr == null && !has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_error("RegModel",
%000000         {"No backdoor access available to poke register '",get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
%000000    if (!m_is_locked_by_field)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_locked_by_field==0) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_locked_by_field==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
%000000      XatomicX(1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
           // create an abstract transaction for this operation
%000000    rw = uvm_reg_item::type_id::create("reg_poke_item",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.path         = UVM_BACKDOOR;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.element_kind = UVM_REG;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.kind         = UVM_WRITE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.bd_kind      = kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.value[0]     = value & ((1 << m_n_bits)-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      bkdr.write(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           else
%000000      backdoor_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           `uvm_info("RegModel", $sformatf("Poked register \"%s\": 'h%h",
%000000                               get_full_name(), value),UVM_HIGH);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    do_predict(rw, UVM_PREDICT_WRITE);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (!m_is_locked_by_field)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_locked_by_field==0) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_locked_by_field==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
%000000      XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        endtask: poke
        
        
        // peek
        
%000000 task uvm_reg::peek(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                    output uvm_reg_data_t    value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                           input  string            kind = "",
                           input  uvm_sequence_base parent = null,
                           input  uvm_object        extension = null,
                           input  string            fname = "",
                           input  int               lineno = 0);
        
%000000    uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (bkdr == null && !has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              `uvm_error("RegModel",
                $sformatf("No backdoor access available to peek register \"%s\"",
%000000                   get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
%000000    if(!m_is_locked_by_field)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_locked_by_field==0) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_locked_by_field==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
%000000       XatomicX(1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
           // create an abstract transaction for this operation
%000000    rw = uvm_reg_item::type_id::create("mem_peek_item",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.path         = UVM_BACKDOOR;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.element_kind = UVM_REG;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.kind         = UVM_READ;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.bd_kind      = kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (bkdr != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      bkdr.read(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           else
%000000      backdoor_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    value = rw.value[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
           `uvm_info("RegModel", $sformatf("Peeked register \"%s\": 'h%h",
%000000                           get_full_name(), value),UVM_HIGH);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    do_predict(rw, UVM_PREDICT_READ);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (!m_is_locked_by_field)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_locked_by_field==0) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=(m_is_locked_by_field==1) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
%000000       XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        endtask: peek
        
        
        // do_check
%000000 function bit uvm_reg::do_check(input uvm_reg_data_t expected,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                       input uvm_reg_data_t actual,
                                       uvm_reg_map          map);
        
%000000    uvm_reg_data_t  dc = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    foreach(m_fields[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       string acc = m_fields[i].get_access(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       acc = acc.substr(0, 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (m_fields[i].get_compare() == UVM_NO_CHECK ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000           acc == "WO") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000          dc |= ((1 << m_fields[i].get_n_bits())-1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
                    << m_fields[i].get_lsb_pos();
              end
           end
        
%000000    if ((actual|dc) === (expected|dc)) return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           
           `uvm_error("RegModel", $sformatf("Register \"%s\" value read from DUT (0x%h) does not match mirrored value (0x%h)",
%000000                                     get_full_name(), actual, (expected ^ ('x & dc))));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                                             
%000000    foreach(m_fields[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       string acc = m_fields[i].get_access(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       acc = acc.substr(0, 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (!(m_fields[i].get_compare() == UVM_NO_CHECK ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000             acc == "WO")) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000          uvm_reg_data_t mask  = ((1 << m_fields[i].get_n_bits())-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000          uvm_reg_data_t val   = actual   >> m_fields[i].get_lsb_pos() & mask;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000          uvm_reg_data_t exp   = expected >> m_fields[i].get_lsb_pos() & mask;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000          if (val !== exp) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                    `uvm_info("RegModel",
                              $sformatf("Field %s (%s[%0d:%0d]) mismatch read=%0d'h%0h mirrored=%0d'h%0h ",
                                        m_fields[i].get_name(), get_full_name(),
                                        m_fields[i].get_lsb_pos() + m_fields[i].get_n_bits() - 1,
                                        m_fields[i].get_lsb_pos(),
                                        m_fields[i].get_n_bits(), val,
                                        m_fields[i].get_n_bits(), exp),
%000000                       UVM_NONE)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
                 end
              end
           end
        
%000000    return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
               
        
        // mirror
        
%000000 task uvm_reg::mirror(output uvm_status_e       status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                             input  uvm_check_e        check = UVM_NO_CHECK,
                             input  uvm_path_e         path = UVM_DEFAULT_PATH,
                             input  uvm_reg_map        map = null,
                             input  uvm_sequence_base  parent = null,
                             input  int                prior = -1,
                             input  uvm_object         extension = null,
                             input  string             fname = "",
                             input  int                lineno = 0);
%000000    uvm_reg_data_t  v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_data_t  exp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    uvm_reg_backdoor bkdr = get_backdoor();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
        
%000000    if (path == UVM_DEFAULT_PATH)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      path = m_parent.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (path == UVM_BACKDOOR && (bkdr != null || has_hdl_path()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      map = uvm_reg_map::backdoor();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           else
%000000      map = get_local_map(map, "read()");
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           
           // Remember what we think the value is before it gets updated
%000000    if (check == UVM_CHECK)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      exp = get_mirrored_value();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    XreadX(status, v, path, map, parent, prior, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (status == UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
%000000    if (check == UVM_CHECK) void'(do_check(exp, v, map));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endtask: mirror
        
        
        // XatomicX
        
 000450 task uvm_reg::XatomicX(bit on);
+000450  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000450    process m_reg_process;
+000450  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
 000450    m_reg_process=process::self();
+000450  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
 000225    if (on) begin
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000225  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
~000175      if (m_reg_process == m_process)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
+000175  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
 000175      m_atomic.get(1);
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
 000175      m_process = m_reg_process; 
+000175  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
 000225    else begin
+000225  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
              // Maybe a key was put back in by a spurious call to reset()
 000225       void'(m_atomic.try_get(1));
+000225  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000225       m_atomic.put(1);
+000225  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
 000225       m_process = null;
+000225  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
           end
        endtask: XatomicX
        
        
        //-------------
        // STANDARD OPS
        //-------------
        
        // convert2string
        
%000000 function string uvm_reg::convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    string res_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    string t_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    bit with_debug_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    string prefix;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    $sformat(convert2string, "Register %s -- %0d bytes, mirror value:'h%h",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000             get_full_name(), get_n_bytes(),get());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        
%000000    if (m_maps.num()==0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000      convert2string = {convert2string, "  (unmapped)\n"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           else
%000000      convert2string = {convert2string, "\n"};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000    foreach (m_maps[map]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      uvm_reg_map parent_map = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      int unsigned offset;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000      while (parent_map != null) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000        uvm_reg_map this_map = parent_map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000        parent_map = this_map.get_parent_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000        offset = parent_map == null ? this_map.get_base_addr(UVM_NO_HIER) :
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                             parent_map.get_submap_offset(this_map);
%000000        prefix = {prefix, "  "};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000        begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000             uvm_endianness_e e = this_map.get_endian();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000             $sformat(convert2string, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                        "%sMapped in '%s' -- %d bytes, %s, offset 'h%0h\n",
%000000                 prefix, this_map.get_full_name(), this_map.get_n_bytes(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                 e.name(), offset);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
               end
             end
           end
%000000    prefix = "  ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000    foreach(m_fields[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       $sformat(convert2string, "%s\n%s", convert2string,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000                m_fields[i].convert2string());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
%000000    if (m_read_in_progress == 1'b1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (m_fname != "" && m_lineno != 0)
-000000  point: type=expr comment=((m_fname != %22%22)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((m_fname != %22%22)==1 && (m_lineno != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((m_lineno != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          $sformat(res_str, "%s:%0d ",m_fname, m_lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000       convert2string = {convert2string, "\n", res_str,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                         "currently executing read method"}; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
%000000    if ( m_write_in_progress == 1'b1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000       if (m_fname != "" && m_lineno != 0)
-000000  point: type=expr comment=((m_fname != %22%22)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((m_fname != %22%22)==1 && (m_lineno != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=expr comment=((m_lineno != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000          $sformat(res_str, "%s:%0d ",m_fname, m_lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000       convert2string = {convert2string, "\n", res_str,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
%000000                         "currently executing write method"}; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
           end
        
        endfunction: convert2string
        
        
        // do_print
        
%000000 function void uvm_reg::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   uvm_reg_field f[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   get_fields(f);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   foreach(f[i]) printer.print_generic(f[i].get_name(),f[i].get_type_name(),-2,f[i].convert2string());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        
        // clone
        
%000000 function uvm_object uvm_reg::clone();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel registers cannot be cloned")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        // do_copy
        
%000000 function void uvm_reg::do_copy(uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel registers cannot be copied")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // do_compare
        
%000000 function bit uvm_reg::do_compare (uvm_object  rhs,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
                                                uvm_comparer comparer);
%000000   `uvm_warning("RegModel","RegModel registers cannot be compared")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // do_pack
        
%000000 function void uvm_reg::do_pack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   `uvm_warning("RegModel","RegModel registers cannot be packed")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        // do_unpack
        
%000000 function void uvm_reg::do_unpack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
%000000   `uvm_warning("RegModel","RegModel registers cannot be unpacked")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg__Vclpkg
        endfunction
        
        
        
