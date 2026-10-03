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
        
        
        //-----------------------------------------------------------------
        // CLASS: uvm_reg_field
        // Field abstraction class
        //
        // A field represents a set of bits that behave consistently
        // as a single entity.
        //
        // A field is contained within a single register, but may
        // have different access policies depending on the adddress map
        // use the access the register (thus the field).
        //-----------------------------------------------------------------
        class uvm_reg_field extends uvm_object;
        
           // Variable: value
           // Mirrored field value.
           // This value can be sampled in a functional coverage model
           // or constrained when randomized.
           rand  uvm_reg_data_t  value; // Mirrored after randomize()
        
           local uvm_reg_data_t  m_mirrored; // What we think is in the HW
           local uvm_reg_data_t  m_desired;  // Mirrored after set()
           local string          m_access;
           local uvm_reg         m_parent;
           local int unsigned    m_lsb;
           local int unsigned    m_size;
           local bit             m_volatile;
           local uvm_reg_data_t  m_reset[string];
           local bit             m_written;
           local bit             m_read_in_progress;
           local bit             m_write_in_progress;
           local string          m_fname;
           local int             m_lineno;
           local int             m_cover_on;
           local bit             m_individually_accessible;
           local uvm_check_e     m_check;
        
           local static int m_max_size;
           local static bit m_policy_names[string];
        
           constraint uvm_reg_field_valid {
              if (`UVM_REG_DATA_WIDTH > m_size) {
                 value < (`UVM_REG_DATA_WIDTH'h1 << m_size);
              }
           }
        
%000001    `uvm_object_utils(uvm_reg_field)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
           //----------------------
           // Group: Initialization
           //----------------------
        
           // Function: new
           //
           // Create a new field instance
           //
           // This method should not be used directly.
           // The uvm_reg_field::type_id::create() factory method
           // should be used instead.
           //
           extern function new(string name = "uvm_reg_field");
        
        
           // Function: configure
           //
           // Instance-specific configuration
           //
           // Specify the ~parent~ register of this field, its
           // ~size~ in bits, the position of its least-significant bit
           // within the register relative to the least-significant bit
           // of the register, its ~access~ policy, volatility,
           // "HARD" ~reset~ value, 
           // whether the field value is actually reset
           // (the ~reset~ value is ignored if ~FALSE~),
           // whether the field value may be randomized and
           // whether the field is the only one to occupy a byte lane in the register.
           //
           // See <set_access> for a specification of the pre-defined
           // field access policies.
           //
           // If the field access policy is a pre-defined policy and NOT one of
           // "RW", "WRC", "WRS", "WO", "W1", or "WO1",
           // the value of ~is_rand~ is ignored and the rand_mode() for the
           // field instance is turned off since it cannot be written.
           //
           extern function void configure(uvm_reg        parent,
                                          int unsigned   size,
                                          int unsigned   lsb_pos,
                                          string         access,
                                          bit            volatile,
                                          uvm_reg_data_t reset,
                                          bit            has_reset,
                                          bit            is_rand,
                                          bit            individually_accessible); 
        
        
           //---------------------
           // Group: Introspection
           //---------------------
        
           // Function: get_name
           //
           // Get the simple name
           //
           // Return the simple object name of this field
           //
        
        
           // Function: get_full_name
           //
           // Get the hierarchical name
           //
           // Return the hierarchal name of this field
           // The base of the hierarchical name is the root block.
           //
           extern virtual function string get_full_name();
        
        
           // Function: get_parent
           //
           // Get the parent register
           //
           extern virtual function uvm_reg get_parent();
           extern virtual function uvm_reg get_register();
        
        
           // Function: get_lsb_pos
           //
           // Return the position of the field
           //
           // Returns the index of the least significant bit of the field
           // in the register that instantiates it.
           // An offset of 0 indicates a field that is aligned with the
           // least-significant bit of the register. 
           //
           extern virtual function int unsigned get_lsb_pos();
        
        
           // Function: get_n_bits
           //
           // Returns the width, in number of bits, of the field. 
           //
           extern virtual function int unsigned get_n_bits();
        
           //
           // FUNCTION: get_max_size
           // Returns the width, in number of bits, of the largest field. 
           //
           extern static function int unsigned get_max_size();
        
        
           // Function: set_access
           //
           // Modify the access policy of the field
           //
           // Modify the access policy of the field to the specified one and
           // return the previous access policy.
           //
           // The pre-defined access policies are as follows.
           // The effect of a read operation are applied after the current
           // value of the field is sampled.
           // The read operation will return the current value,
           // not the value affected by the read operation (if any).
           //
           // "RO"    - W: no effect, R: no effect
           // "RW"    - W: as-is, R: no effect
           // "RC"    - W: no effect, R: clears all bits
           // "RS"    - W: no effect, R: sets all bits
           // "WRC"   - W: as-is, R: clears all bits
           // "WRS"   - W: as-is, R: sets all bits
           // "WC"    - W: clears all bits, R: no effect
           // "WS"    - W: sets all bits, R: no effect
           // "WSRC"  - W: sets all bits, R: clears all bits
           // "WCRS"  - W: clears all bits, R: sets all bits
           // "W1C"   - W: 1/0 clears/no effect on matching bit, R: no effect
           // "W1S"   - W: 1/0 sets/no effect on matching bit, R: no effect
           // "W1T"   - W: 1/0 toggles/no effect on matching bit, R: no effect
           // "W0C"   - W: 1/0 no effect on/clears matching bit, R: no effect
           // "W0S"   - W: 1/0 no effect on/sets matching bit, R: no effect
           // "W0T"   - W: 1/0 no effect on/toggles matching bit, R: no effect
           // "W1SRC" - W: 1/0 sets/no effect on matching bit, R: clears all bits
           // "W1CRS" - W: 1/0 clears/no effect on matching bit, R: sets all bits
           // "W0SRC" - W: 1/0 no effect on/sets matching bit, R: clears all bits
           // "W0CRS" - W: 1/0 no effect on/clears matching bit, R: sets all bits
           // "WO"    - W: as-is, R: error
           // "WOC"   - W: clears all bits, R: error
           // "WOS"   - W: sets all bits, R: error
           // "W1"    - W: first one after ~HARD~ reset is as-is, other W have no effects, R: no effect
           // "WO1"   - W: first one after ~HARD~ reset is as-is, other W have no effects, R: error
           //
           // It is important to remember that modifying the access of a field
           // will make the register model diverge from the specification
           // that was used to create it.
           //
           extern virtual function string set_access(string mode);
        
        
           // Function: define_access
           //
           // Define a new access policy value
           //
           // Because field access policies are specified using string values,
           // there is no way for SystemVerilog to verify if a spceific access
           // value is valid or not.
           // To help catch typing errors, user-defined access values
           // must be defined using this method to avoid beign reported as an
           // invalid access policy.
           //
           // The name of field access policies are always converted to all uppercase.
           //
           // Returns TRUE if the new access policy was not previously
           // defined.
           // Returns FALSE otherwise but does not issue an error message.
           //
           extern static function bit define_access(string name);
%000001    local static bit m_predefined = m_predefine_policies();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
           extern local static function bit m_predefine_policies();
         
           // Function: get_access
           //
           // Get the access policy of the field
           //
           // Returns the current access policy of the field
           // when written and read through the specified address ~map~.
           // If the register containing the field is mapped in multiple
           // address map, an address map must be specified.
           // The access policy of a field from a specific
           // address map may be restricted by the register's access policy in that
           // address map.
           // For example, a RW field may only be writable through one of
           // the address maps and read-only through all of the other maps.
           //
           extern virtual function string get_access(uvm_reg_map map = null);
        
        
           // Function: is_known_access
           //
           // Check if access policy is a built-in one.
           //
           // Returns TRUE if the current access policy of the field,
           // when written and read through the specified address ~map~,
           // is a built-in access policy.
           //
           extern virtual function bit is_known_access(uvm_reg_map map = null);
        
           //
           // Function: set_volatility
           // Modify the volatility of the field to the specified one.
           //
           // It is important to remember that modifying the volatility of a field
           // will make the register model diverge from the specification
           // that was used to create it.
           //
           extern virtual function void set_volatility(bit volatile);
        
           //
           // Function: is_volatile
           // Indicates if the field value is volatile
           //
           // UVM uses the IEEE 1685-2009 IP-XACT definition of "volatility".
           // If TRUE, the value of the register is not predictable because it
           // may change between consecutive accesses.
           // This typically indicates a field whose value is updated by the DUT.
           // The nature or cause of the change is not specified.
           // If FALSE, the value of the register is not modified between
           // consecutive accesses.
           //
           extern virtual function bit is_volatile();
        
        
           //--------------
           // Group: Access
           //--------------
        
        
           // Function: set
           //
           // Set the desired value for this field
           //
           // It sets the desired value of the field to the specified ~value~
           // modified by the field access policy.
           // It does not actually set the value of the field in the design,
           // only the desired value in the abstraction class.
           // Use the <uvm_reg::update()> method to update the actual register
           // with the desired value or the <uvm_reg_field::write()> method
           // to actually write the field and update its mirrored value.
           //
           // The final desired value in the mirror is a function of the field access
           // policy and the set value, just like a normal physical write operation
           // to the corresponding bits in the hardware.
           // As such, this method (when eventually followed by a call to
           // <uvm_reg::update()>)
           // is a zero-time functional replacement for the <uvm_reg_field::write()>
           // method.
           // For example, the desired value of a read-only field is not modified
           // by this method and the desired value of a write-once field can only
           // be set if the field has not yet been
           // written to using a physical (for example, front-door) write operation.
           //
           // Use the <uvm_reg_field::predict()> to modify the mirrored value of
           // the field.
           //
           extern virtual function void set(uvm_reg_data_t  value,
                                            string          fname = "",
                                            int             lineno = 0);
        
           // Function: get
           //
           // Return the desired value of the field
           //
           // It does not actually read the value
           // of the field in the design, only the desired value
           // in the abstraction class. Unless set to a different value
           // using the <uvm_reg_field::set()>, the desired value
           // and the mirrored value are identical.
           //
           // Use the <uvm_reg_field::read()> or <uvm_reg_field::peek()>
           // method to get the actual field value. 
           //
           // If the field is write-only, the desired/mirrored
           // value is the value last written and assumed
           // to reside in the bits implementing it.
           // Although a physical read operation would something different,
           // the returned value is the actual content.
           //
           extern virtual function uvm_reg_data_t get(string fname = "",
                                                      int    lineno = 0);
        
        
           // Function: get_mirrored_value
           //
           // Return the mirrored value of the field
           //
           // It does not actually read the value of the field in the design, only the mirrored value
           // in the abstraction class. 
           //
           // If the field is write-only, the desired/mirrored
           // value is the value last written and assumed
           // to reside in the bits implementing it.
           // Although a physical read operation would something different,
           // the returned value is the actual content.
           //
           extern virtual function uvm_reg_data_t get_mirrored_value(string fname = "",
                                                      int    lineno = 0);
        
           // Function: reset
           //
           // Reset the desired/mirrored value for this field.
           //
           // It sets the desired and mirror value of the field
           // to the reset event specified by ~kind~.
           // If the field does not have a reset value specified for the
           // specified reset ~kind~ the field is unchanged.
           //
           // It does not actually reset the value of the field in the design,
           // only the value mirrored in the field abstraction class.
           //
           // Write-once fields can be modified after
           // a "HARD" reset operation.
           //
           extern virtual function void reset(string kind = "HARD");
        
        
           // Function: get_reset
           //
           // Get the specified reset value for this field
           //
           // Return the reset value for this field
           // for the specified reset ~kind~.
           // Returns the current field value is no reset value has been
           // specified for the specified reset event.
           //
           extern virtual function uvm_reg_data_t get_reset(string kind = "HARD");
        
        
           // Function: has_reset
           //
           // Check if the field has a reset value specified
           //
           // Return TRUE if this field has a reset value specified
           // for the specified reset ~kind~.
           // If ~delete~ is TRUE, removes the reset value, if any.
           //
           extern virtual function bit has_reset(string kind = "HARD",
                                                 bit    delete = 0);
        
        
           // Function: set_reset
           //
           // Specify or modify the reset value for this field
           //
           // Specify or modify the reset value for this field corresponding
           // to the cause specified by ~kind~.
           //
           extern virtual function void set_reset(uvm_reg_data_t value,
                                                  string kind = "HARD");
        
        
           // Function: needs_update
           //
           // Check if the abstract model contains different desired and mirrored values.
           //
           // If a desired field value has been modified in the abstraction class
           // without actually updating the field in the DUT,
           // the state of the DUT (more specifically what the abstraction class
           // ~thinks~ the state of the DUT is) is outdated.
           // This method returns TRUE
           // if the state of the field in the DUT needs to be updated 
           // to match the desired value.
           // The mirror values or actual content of DUT field are not modified.
           // Use the <uvm_reg::update()> to actually update the DUT field.
           //
           extern virtual function bit needs_update();
        
        
           // Task: write
           //
           // Write the specified value in this field
           //
           // Write ~value~ in the DUT field that corresponds to this
           // abstraction class instance using the specified access
           // ~path~. 
           // If the register containing this field is mapped in more
           //  than one address map, 
           // an address ~map~ must be
           // specified if a physical access is used (front-door access).
           // If a back-door access path is used, the effect of writing
           // the field through a physical access is mimicked. For
           // example, read-only bits in the field will not be written.
           //
           // The mirrored value will be updated using the <uvm_reg_field::predict()>
           // method.
           //
           // If a front-door access is used, and
           // if the field is the only field in a byte lane and
           // if the physical interface corresponding to the address map used
           // to access the field support byte-enabling,
           // then only the field is written.
           // Otherwise, the entire register containing the field is written,
           // and the mirrored values of the other fields in the same register
           // are used in a best-effort not to modify their value.
           //
           // If a backdoor access is used, a peek-modify-poke process is used.
           // in a best-effort not to modify the value of the other fields in the
           // register.
           //
           extern virtual task write (output uvm_status_e       status,
                                      input  uvm_reg_data_t     value,
                                      input  uvm_path_e         path = UVM_DEFAULT_PATH,
                                      input  uvm_reg_map        map = null,
                                      input  uvm_sequence_base  parent = null,
                                      input  int                prior = -1,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
        
        
           // Task: read
           //
           // Read the current value from this field
           //
           // Read and return ~value~ from the DUT field that corresponds to this
           // abstraction class instance using the specified access
           // ~path~. 
           // If the register containing this field is mapped in more
           // than one address map, an address ~map~ must be
           // specified if a physical access is used (front-door access).
           // If a back-door access path is used, the effect of reading
           // the field through a physical access is mimicked. For
           // example, clear-on-read bits in the filed will be set to zero.
           //
           // The mirrored value will be updated using the <uvm_reg_field::predict()>
           // method.
           //
           // If a front-door access is used, and
           // if the field is the only field in a byte lane and
           // if the physical interface corresponding to the address map used
           // to access the field support byte-enabling,
           // then only the field is read.
           // Otherwise, the entire register containing the field is read,
           // and the mirrored values of the other fields in the same register
           // are updated.
           //
           // If a backdoor access is used, the entire containing register is peeked
           // and the mirrored value of the other fields in the register is updated.
           //
           extern virtual task read  (output uvm_status_e       status,
                                      output uvm_reg_data_t     value,
                                      input  uvm_path_e         path = UVM_DEFAULT_PATH,
                                      input  uvm_reg_map        map = null,
                                      input  uvm_sequence_base  parent = null,
                                      input  int                prior = -1,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
                       
        
           // Task: poke
           //
           // Deposit the specified value in this field
           //
           // Deposit the value in the DUT field corresponding to this
           // abstraction class instance, as-is, using a back-door access.
           // A peek-modify-poke process is used
           // in a best-effort not to modify the value of the other fields in the
           // register.
           //
           // The mirrored value will be updated using the <uvm_reg_field::predict()>
           // method.
           //
           extern virtual task poke  (output uvm_status_e       status,
                                      input  uvm_reg_data_t     value,
                                      input  string             kind = "",
                                      input  uvm_sequence_base  parent = null,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
        
        
           // Task: peek
           //
           // Read the current value from this field
           //
           // Sample the value in the DUT field corresponding to this
           // absraction class instance using a back-door access.
           // The field value is sampled, not modified.
           //
           // Uses the HDL path for the design abstraction specified by ~kind~.
           //
           // The entire containing register is peeked
           // and the mirrored value of the other fields in the register
           // are updated using the <uvm_reg_field::predict()> method.
           //
           //
           extern virtual task peek  (output uvm_status_e       status,
                                      output uvm_reg_data_t     value,
                                      input  string             kind = "",
                                      input  uvm_sequence_base  parent = null,
                                      input  uvm_object         extension = null,
                                      input  string             fname = "",
                                      input  int                lineno = 0);
                       
        
           // Task: mirror
           //
           // Read the field and update/check its mirror value
           //
           // Read the field and optionally compared the readback value
           // with the current mirrored value if ~check~ is <UVM_CHECK>.
           // The mirrored value will be updated using the <predict()>
           // method based on the readback value.
           //
           // The ~path~ argument specifies whether to mirror using 
           // the  <UVM_FRONTDOOR> (<read>) or
           // or <UVM_BACKDOOR> (<peek()>).
           //
           // If ~check~ is specified as <UVM_CHECK>,
           // an error message is issued if the current mirrored value
           // does not match the readback value, unless <set_compare> was used
           // disable the check.
           //
           // If the containing register is mapped in multiple address maps and physical
           // access is used (front-door access), an address ~map~ must be specified.
           // For write-only fields, their content is mirrored and optionally
           // checked only if a UVM_BACKDOOR
           // access path is used to read the field. 
           //
           extern virtual task mirror(output uvm_status_e      status,
                                      input  uvm_check_e       check = UVM_NO_CHECK,
                                      input  uvm_path_e        path = UVM_DEFAULT_PATH,
                                      input  uvm_reg_map       map = null,
                                      input  uvm_sequence_base parent = null,
                                      input  int               prior = -1,
                                      input  uvm_object        extension = null,
                                      input  string            fname = "",
                                      input  int               lineno = 0);
        
        
           // Function: set_compare
           //
           // Sets the compare policy during a mirror update. 
           // The field value is checked against its mirror only when both the
           // ~check~ argument in <uvm_reg_block::mirror>, <uvm_reg::mirror>,
           // or <uvm_reg_field::mirror> and the compare policy for the
           // field is <UVM_CHECK>.
           //
           extern function void set_compare(uvm_check_e check=UVM_CHECK);
        
        
           // Function: get_compare
           //
           // Returns the compare policy for this field.
           //
           extern function uvm_check_e get_compare();
        
           
           // Function: is_indv_accessible
           //
           // Check if this field can be written individually, i.e. without
           // affecting other fields in the containing register.
           //
           extern function bit is_indv_accessible (uvm_path_e  path,
                                                   uvm_reg_map local_map);
        
        
           // Function: predict
           //
           // Update the mirrored value for this field.
           //
           // Predict the mirror value of the field based on the specified
           // observed ~value~ on a bus using the specified address ~map~.
           //
           // If ~kind~ is specified as <UVM_PREDICT_READ>, the value
           // was observed in a read transaction on the specified address ~map~ or
           // backdoor (if ~path~ is <UVM_BACKDOOR>).
           // If ~kind~ is specified as <UVM_PREDICT_WRITE>, the value
           // was observed in a write transaction on the specified address ~map~ or
           // backdoor (if ~path~ is <UVM_BACKDOOR>).
           // If ~kind~ is specified as <UVM_PREDICT_DIRECT>, the value
           // was computed and is updated as-is, without regard to any access policy.
           // For example, the mirrored value of a read-only field is modified
           // by this method if ~kind~ is specified as <UVM_PREDICT_DIRECT>.
           //
           // This method does not allow an update of the mirror
           // when the register containing this field is busy executing
           // a transaction because the results are unpredictable and
           // indicative of a race condition in the testbench.
           //
           // Returns TRUE if the prediction was succesful.
           //
           extern function bit predict (uvm_reg_data_t    value,
                                        uvm_reg_byte_en_t be = -1,
                                        uvm_predict_e     kind = UVM_PREDICT_DIRECT,
                                        uvm_path_e        path = UVM_FRONTDOOR,
                                        uvm_reg_map       map = null,
                                        string            fname = "",
                                        int               lineno = 0);
        
        
        
           /*local*/
           extern virtual function uvm_reg_data_t XpredictX (uvm_reg_data_t cur_val,
                                                             uvm_reg_data_t wr_val,
                                                             uvm_reg_map    map);
        
           /*local*/
           extern virtual function uvm_reg_data_t XupdateX();
          
           /*local*/
           extern function bit Xcheck_accessX (input uvm_reg_item rw,
                                               output uvm_reg_map_info map_info,
                                               input string caller);
        
           extern virtual task do_write(uvm_reg_item rw);
           extern virtual task do_read(uvm_reg_item rw);
           extern virtual function void do_predict 
                                          (uvm_reg_item rw,
                                           uvm_predict_e kind=UVM_PREDICT_DIRECT,
                                           uvm_reg_byte_en_t be = -1);
        
        
           extern function void pre_randomize();
           extern function void post_randomize();
        
        
           //-----------------
           // Group: Callbacks
           //-----------------
        
%000001    `uvm_register_cb(uvm_reg_field, uvm_reg_cbs)
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        
           // Task: pre_write
           //
           // Called before field write.
           //
           // If the specified data value, access ~path~ or address ~map~ are modified,
           // the updated data value, access path or address map will be used
           // to perform the register operation.
           // If the ~status~ is modified to anything other than <UVM_IS_OK>,
           // the operation is aborted.
           //
           // The field callback methods are invoked after the callback methods
           // on the containing register.
           // The registered callback methods are invoked after the invocation
           // of this method.
           //
 000100    virtual task pre_write  (uvm_reg_item rw); endtask
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        
           // Task: post_write
           //
           // Called after field write.
           //
           // If the specified ~status~ is modified,
           // the updated status will be
           // returned by the register operation.
           //
           // The field callback methods are invoked after the callback methods
           // on the containing register.
           // The registered callback methods are invoked before the invocation
           // of this method.
           //
 000100    virtual task post_write (uvm_reg_item rw); endtask
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        
           // Task: pre_read
           //
           // Called before field read.
           //
           // If the access ~path~ or address ~map~ in the ~rw~ argument are modified,
           // the updated access path or address map will be used to perform
           // the register operation.
           // If the ~status~ is modified to anything other than <UVM_IS_OK>,
           // the operation is aborted.
           //
           // The field callback methods are invoked after the callback methods
           // on the containing register.
           // The registered callback methods are invoked after the invocation
           // of this method.
           //
 000500    virtual task pre_read (uvm_reg_item rw); endtask
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        
           // Task: post_read
           //
           // Called after field read.
           //
           // If the specified readback data or~status~ in the ~rw~ argument is
           // modified, the updated readback data or status will be
           // returned by the register operation.
           //
           // The field callback methods are invoked after the callback methods
           // on the containing register.
           // The registered callback methods are invoked before the invocation
           // of this method.
           //
 000500    virtual task post_read  (uvm_reg_item rw); endtask
+000500  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        
           extern virtual function void do_print (uvm_printer printer);
           extern virtual function string convert2string;
           extern virtual function uvm_object clone();
           extern virtual function void do_copy   (uvm_object rhs);
           extern virtual function bit  do_compare (uvm_object  rhs,
                                                    uvm_comparer comparer);
           extern virtual function void do_pack (uvm_packer packer);
           extern virtual function void do_unpack (uvm_packer packer);
        
        endclass: uvm_reg_field
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        // new
        
~000010 function uvm_reg_field::new(string name = "uvm_reg_field");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    super.new(name);
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: new
        
        
        // configure
        
 000010 function void uvm_reg_field::configure(uvm_reg        parent,
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                               int unsigned   size,
                                               int unsigned   lsb_pos,
                                               string         access,
                                               bit            volatile,
                                               uvm_reg_data_t reset,
                                               bit            has_reset,
                                               bit            is_rand,
                                               bit            individually_accessible); 
 000010    m_parent = parent;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
~000010    if (size == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+000010  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_error("RegModel",
%000000          $sformatf("Field \"%s\" cannot have 0 bits", get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       size = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
 000010    m_size      = size;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    m_volatile  = volatile;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    m_access    = access.toupper();
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    m_lsb       = lsb_pos;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    m_cover_on  = UVM_NO_COVERAGE;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    m_written   = 0;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
~000010    m_check     = volatile ? UVM_NO_CHECK : UVM_CHECK;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000004  point: type=expr comment=(volatile==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000006  point: type=expr comment=(volatile==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    m_individually_accessible = individually_accessible;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~000010    if (has_reset)
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010       set_reset(reset);
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           else
%000000       uvm_resource_db#(bit)::set({"REG::", get_full_name()},
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000                                  "NO_REG_HW_RESET_TEST", 1);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 000010    m_parent.add_field(this);
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~000010    if (!m_policy_names.exists(m_access)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+000010  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_policy_names.exists(m_access)==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
+000010  point: type=expr comment=(m_policy_names.exists(m_access)==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_error("RegModel", {"Access policy '",access,
%000000        "' for field '",get_full_name(),"' is not defined. Setting to RW"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       m_access = "RW";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
%000006    if (size > m_max_size)
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000006  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000004       m_max_size = size;
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           
           // Ignore is_rand if the field is known not to be writeable
           // i.e. not "RW", "WRC", "WRS", "WO", "W1", "WO1"
 000010    case (access)
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
            "RO", "RC", "RS", "WC", "WS",
              "W1C", "W1S", "W1T", "W0C", "W0S", "W0T",
              "W1SRC", "W1CRS", "W0SRC", "W0CRS", "WSRC", "WCRS",
%000007       "WOC", "WOS": is_rand = 0;
-000007  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
           endcase
        
%000007    if (!is_rand)
-000007  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000007  point: type=expr comment=(is_rand==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000003  point: type=expr comment=(is_rand==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
%000007      value.rand_mode(0);
-000007  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endfunction: configure
        
        
        // get_parent
        
%000000 function uvm_reg uvm_reg_field::get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    return m_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: get_parent
        
        
        // get_full_name
        
%000000 function string uvm_reg_field::get_full_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    return {m_parent.get_full_name(), ".", get_name()};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: get_full_name
        
        
        // get_register
        
%000000 function uvm_reg uvm_reg_field::get_register();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    return m_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: get_register
        
        
        // get_lsb_pos
        
 002851 function int unsigned uvm_reg_field::get_lsb_pos();
+002851  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 002851    return m_lsb;
+002851  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: get_lsb_pos
        
        
        // get_n_bits
        
 001841 function int unsigned uvm_reg_field::get_n_bits();
+001841  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 001841    return m_size;
+001841  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: get_n_bits
        
        
        // get_max_size
        
%000001 function int unsigned uvm_reg_field::get_max_size();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    return m_max_size;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: get_max_size
        
        
        // is_known_access
        
%000000 function bit uvm_reg_field::is_known_access(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    string acc = get_access(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    case (acc)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
            "RO", "RW", "RC", "RS", "WC", "WS",
              "W1C", "W1S", "W1T", "W0C", "W0S", "W0T",
              "WRC", "WRS", "W1SRC", "W1CRS", "W0SRC", "W0CRS", "WSRC", "WCRS",
%000000       "WO", "WOC", "WOS", "W1", "WO1" : return 1;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
           endcase
%000000    return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // get_access
        
~001158 function string uvm_reg_field::get_access(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
 001158    get_access = m_access;
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~001158    if (map == uvm_reg_map::backdoor())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+001158  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      return get_access;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
           // Is the register restricted in this map?
 001158    case (m_parent.get_rights(map))
+001158  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "RW":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
               // No restrictions
%000000        return get_access;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 001006      "RO":
+001006  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
 001006        case (get_access)
+001006  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                "RW", "RO", "WC", "WS",
                  "W1C", "W1S", "W1T", "W0C", "W0S", "W0T",
                  "W1"
 000504         : get_access = "RO";
+000504  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                
                "RC", "WRC", "W1SRC", "W0SRC", "WSRC"
 000502         : get_access = "RC";
+000502  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                
                "RS", "WRS", "W1CRS", "W0CRS", "WCRS"
%000000         : get_access = "RS";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                
%000000          "WO", "WOC", "WOS", "WO1": begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                    `uvm_error("RegModel",
                               $sformatf("%s field \"%s\" restricted to RO in map \"%s\"",
%000000                                  get_access(), get_name(), map.get_full_name()))
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                 end
        
                 // No change for the other modes
               endcase
        
%000000      "WO":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000        case (get_access)
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                 "RW",
%000000          "WO": get_access = "WO";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          default: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                    `uvm_error("RegModel", {get_access," field '",get_full_name(),
%000000                        "' restricted to WO in map '",map.get_full_name(),"'"})
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                 end
        
                 // No change for the other modes
               endcase
        
%000000      default:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
               `uvm_error("RegModel", {"Register '",m_parent.get_full_name(),
                          "' containing field '",get_name(),"' is mapped in map '",
%000000                   map.get_full_name(),"' with unknown access right '", m_parent.get_rights(map), "'"})
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
           endcase
        endfunction: get_access
        
        
        // set_access
        
%000000 function string uvm_reg_field::set_access(string mode);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    set_access = m_access;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_access = mode.toupper();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    if (!m_policy_names.exists(m_access)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_policy_names.exists(m_access)==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_policy_names.exists(m_access)==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_error("RegModel", {"Access policy '",m_access,
%000000                               "' is not a defined field access policy"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       m_access = set_access;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        endfunction: set_access
        
        
        // define_access
        
 000025 function bit uvm_reg_field::define_access(string name);
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
~000025    if (!m_predefined) m_predefined = m_predefine_policies();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+000025  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_predefined==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
+000025  point: type=expr comment=(m_predefined==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 000025    name = name.toupper();
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~000025    if (m_policy_names.exists(name)) return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+000025  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 000025    m_policy_names[name] = 1;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025    return 1;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // m_predefined_policies
        
%000001 function bit uvm_reg_field::m_predefine_policies();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    if (m_predefined) return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000001    m_predefined = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
           
%000001    void'(define_access("RO"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("RW"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("RC"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("RS"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WRC"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WRS"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WC"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WS"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WSRC"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WCRS"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W1C"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W1S"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W1T"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W0C"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W0S"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W0T"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W1SRC"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W1CRS"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W0SRC"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W0CRS"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WO"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WOC"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WOS"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("W1"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    void'(define_access("WO1"));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000001    return 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // set_volatility
        
%000000 function void uvm_reg_field::set_volatility(bit volatile);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_volatile = volatile;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // is_volatile
        
%000000 function bit uvm_reg_field::is_volatile();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    return m_volatile;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // XpredictX
        
 000025 function uvm_reg_data_t uvm_reg_field::XpredictX (uvm_reg_data_t cur_val,
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                                          uvm_reg_data_t wr_val,
                                                          uvm_reg_map    map);
 000025    uvm_reg_data_t mask = ('b1 << m_size)-1;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
           
 000025    case (get_access(map))
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "RO":    return cur_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "RW":    return wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "RC":    return cur_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "RS":    return cur_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WC":    return '0;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WS":    return mask;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WRC":   return wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WRS":   return wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WSRC":  return mask;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WCRS":  return '0;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W1C":   return cur_val & (~wr_val);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W1S":   return cur_val | wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W1T":   return cur_val ^ wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W0C":   return cur_val & wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W0S":   return cur_val | (~wr_val & mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W0T":   return cur_val ^ (~wr_val & mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W1SRC": return cur_val | wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W1CRS": return cur_val & (~wr_val);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W0SRC": return cur_val | (~wr_val & mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "W0CRS": return cur_val & wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WO":    return wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WOC":   return '0;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      "WOS":   return mask;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
~000024      "W1":    return (m_written) ? cur_val : wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
-000001  point: type=expr comment=(m_written==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
+000024  point: type=expr comment=(m_written==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
~000024      "WO1":   return (m_written) ? cur_val : wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
-000001  point: type=expr comment=(m_written==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
+000024  point: type=expr comment=(m_written==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      default: return wr_val;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
           endcase
        
~000025    `uvm_fatal("RegModel", "uvm_reg_field::XpredictX(): Internal error");
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025    return 0;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: XpredictX
        
        
        
        // predict
        
 000025 function bit uvm_reg_field::predict (uvm_reg_data_t    value,
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                             uvm_reg_byte_en_t be = -1,
                                             uvm_predict_e     kind = UVM_PREDICT_DIRECT,
                                             uvm_path_e        path = UVM_FRONTDOOR,
                                             uvm_reg_map       map = null,
                                             string            fname = "",
                                             int               lineno = 0);
 000025   uvm_reg_item rw = new;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025   rw.value[0] = value;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025   rw.path = path;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025   rw.map = map;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025   rw.fname = fname;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025   rw.lineno = lineno;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025   do_predict(rw, kind, be);
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025   predict = (rw.status == UVM_NOT_OK) ? 0 : 1;
+000025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: predict
        
        
        // do_predict
        
 001025 function void uvm_reg_field::do_predict(uvm_reg_item      rw,
+001025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                                uvm_predict_e     kind = UVM_PREDICT_DIRECT,
%000000                                         uvm_reg_byte_en_t be = -1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           
 001025    uvm_reg_data_t field_val = rw.value[0] & ((1 << m_size)-1);
+001025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~001025    if (rw.status != UVM_NOT_OK)
+001025  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
 001025      rw.status = UVM_IS_OK;
+001025  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
           // Assume that the entire field is enabled
~001025    if (!be[0])
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+001025  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(be[0]==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
+001025  point: type=expr comment=(be[0]==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 001025    m_fname = rw.fname;
+001025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 001025    m_lineno = rw.lineno;
+001025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 001025    case (kind)
+001025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 000025      UVM_PREDICT_WRITE:
+000025  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025        begin
+000025  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025          uvm_reg_field_cb_iter cbs = new(this);
+000025  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~000025          if (rw.path == UVM_FRONTDOOR || rw.path == UVM_PREDICT)
+000025  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025             field_val = XpredictX(m_mirrored, field_val, rw.map);
+000025  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 000025          m_written = 1;
+000025  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~000025          for (uvm_reg_cbs cb = cbs.first(); cb != null; cb = cbs.next())
+000025  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             cb.post_predict(this, m_mirrored, field_val, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000                             UVM_PREDICT_WRITE, rw.path, rw.map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 000025          field_val &= ('b1 << m_size)-1;
+000025  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
               end
        
 001000      UVM_PREDICT_READ:
+001000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
 001000        begin
+001000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
 001000          uvm_reg_field_cb_iter cbs = new(this);
+001000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~001000          if (rw.path == UVM_FRONTDOOR || rw.path == UVM_PREDICT) begin
+001000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 001000             string acc = get_access(rw.map);
+001000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 000500             if (acc == "RC" ||
+000500  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_field__Vclpkg
                        acc == "WRC" ||
                        acc == "WSRC" ||
~000500                 acc == "W1SRC" ||
+000500  point: type=expr comment=((acc == %22RC%22)==0 && (acc == %22WRC%22)==0 && (acc == %22WSRC%22)==0 && (acc == %22W1SRC%22)==0 && (acc == %22W0SRC%22)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
+000500  point: type=expr comment=((acc == %22RC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22W0SRC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22W1SRC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22WRC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22WSRC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
                        acc == "W0SRC")
 000500               field_val = 0;  // (clear)
+000500  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000             else if (acc == "RS" ||
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_field__Vclpkg
                             acc == "WRS" ||
                             acc == "WCRS" ||
~000500                      acc == "W1CRS" ||
+000500  point: type=expr comment=((acc == %22RS%22)==0 && (acc == %22WRS%22)==0 && (acc == %22WCRS%22)==0 && (acc == %22W1CRS%22)==0 && (acc == %22W0CRS%22)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22RS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22W0CRS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22W1CRS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22WCRS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22WRS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
                             acc == "W0CRS")
%000000               field_val = ('b1 << m_size)-1; // all 1's (set)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~000500             else if (acc == "WO" ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+000500  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                             acc == "WOC" ||
~000500                      acc == "WOS" ||
+000500  point: type=expr comment=((acc == %22WO%22)==0 && (acc == %22WOC%22)==0 && (acc == %22WOS%22)==0 && (acc == %22WO1%22)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22WO%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22WO1%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22WOC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((acc == %22WOS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
                             acc == "WO1")
%000000               return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                 end
        
~001000          for (uvm_reg_cbs cb = cbs.first(); cb != null; cb = cbs.next())
+001000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             cb.post_predict(this, m_mirrored, field_val,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000                             UVM_PREDICT_READ, rw.path, rw.map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 001000          field_val &= ('b1 << m_size)-1;
+001000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
               end
        
%000000      UVM_PREDICT_DIRECT:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000        begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          if (m_parent.is_busy()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                   `uvm_warning("RegModel", {"Trying to predict value of field '",
                      get_name(),"' while register '",m_parent.get_full_name(),
%000000               "' is being accessed"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000            rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                 end
               end
           endcase
        
           // update the mirror with predicted value
 001025    m_mirrored = field_val;
+001025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 001025    m_desired  = field_val;
+001025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 001025    this.value = field_val;
+001025  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endfunction: do_predict
        
        
        // XupdateX
        
%000000 function uvm_reg_data_t  uvm_reg_field::XupdateX();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
           // Figure out which value must be written to get the desired value
           // given what we think is the current value in the hardware
%000000    XupdateX = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    case (m_access)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "RO":    XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "RW":    XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "RC":    XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "RS":    XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WRC":   XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WRS":   XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WC":    XupdateX = m_desired;  // Warn if != 0
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WS":    XupdateX = m_desired;  // Warn if != 1
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WSRC":  XupdateX = m_desired;  // Warn if != 1
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WCRS":  XupdateX = m_desired;  // Warn if != 0
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1C":   XupdateX = ~m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1S":   XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1T":   XupdateX = m_desired ^ m_mirrored;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0C":   XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0S":   XupdateX = ~m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0T":   XupdateX = ~(m_desired ^ m_mirrored);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1SRC": XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1CRS": XupdateX = ~m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0SRC": XupdateX = ~m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0CRS": XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WO":    XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WOC":   XupdateX = m_desired;  // Warn if != 0
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WOS":   XupdateX = m_desired;  // Warn if != 1
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1":    XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WO1":   XupdateX = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       default: XupdateX = m_desired;      
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
           endcase
%000000    XupdateX &= (1 << m_size) - 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
           
        endfunction: XupdateX
        
        
        // set
        
 000100 function void uvm_reg_field::set(uvm_reg_data_t  value,
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                         string          fname = "",
                                         int             lineno = 0);
 000100    uvm_reg_data_t mask = ('b1 << m_size)-1;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
 000100    m_fname = fname;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000100    m_lineno = lineno;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
~000100    if (value >> m_size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+000100  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_warning("RegModel",
                 $sformatf("Specified value (0x%h) greater than field \"%s\" size (%0d bits)",
%000000              value, get_name(), m_size));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       value &= mask;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
~000100    if (m_parent.is_busy()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+000100  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_warning("UVM/FLD/SET/BSY",
                           $sformatf("Setting the value of field \"%s\" while containing register \"%s\" is being accessed may result in loss of desired field value. A race condition between threads concurrently accessing the register model is the likely cause of the problem.",
%000000                              get_name(), m_parent.get_full_name()))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
 000100    case (m_access)
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000025       "RO":    m_desired = m_desired;
+000025  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
 000075       "RW":    m_desired = value;
+000075  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "RC":    m_desired = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "RS":    m_desired = m_desired;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WC":    m_desired = '0;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WS":    m_desired = mask;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WRC":   m_desired = value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WRS":   m_desired = value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WSRC":  m_desired = mask;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WCRS":  m_desired = '0;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1C":   m_desired = m_desired & (~value);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1S":   m_desired = m_desired | value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1T":   m_desired = m_desired ^ value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0C":   m_desired = m_desired & value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0S":   m_desired = m_desired | (~value & mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0T":   m_desired = m_desired ^ (~value & mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1SRC": m_desired = m_desired | value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W1CRS": m_desired = m_desired & (~value);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0SRC": m_desired = m_desired | (~value & mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "W0CRS": m_desired = m_desired & value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WO":    m_desired = value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WOC":   m_desired = '0;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       "WOS":   m_desired = mask;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
~000076       "W1":    m_desired = (m_written) ? m_desired : value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
+000076  point: type=expr comment=(m_written==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
+000024  point: type=expr comment=(m_written==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
~000076       "WO1":   m_desired = (m_written) ? m_desired : value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
+000076  point: type=expr comment=(m_written==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
+000024  point: type=expr comment=(m_written==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       default: m_desired = value;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
           endcase
 000100    this.value = m_desired;
+000100  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: set
        
         
        // get
        
%000000 function uvm_reg_data_t  uvm_reg_field::get(string  fname = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                                    int     lineno = 0);
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    get = m_desired;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: get
        
         
        // get_mirrored_value
        
%000000 function uvm_reg_data_t  uvm_reg_field::get_mirrored_value(string  fname = "",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                                    int     lineno = 0);
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    get_mirrored_value = m_mirrored;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: get_mirrored_value
        
        
        // reset
        
 000010 function void uvm_reg_field::reset(string kind = "HARD");
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~000010    if (!m_reset.exists(kind))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
+000010  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_reset.exists(kind)==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
+000010  point: type=expr comment=(m_reset.exists(kind)==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           
 000010    m_mirrored = m_reset[kind];
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    m_desired  = m_mirrored;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    value      = m_mirrored;
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
~000010    if (kind == "HARD")
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010       m_written  = 0;
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endfunction: reset
        
        
        // has_reset
        
%000000 function bit uvm_reg_field::has_reset(string kind = "HARD",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                              bit    delete = 0);
        
%000000    if (!m_reset.exists(kind)) return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_reset.exists(kind)==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_reset.exists(kind)==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    if (delete) m_reset.delete(kind);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: has_reset
        
        
        // get_reset
        
        function uvm_reg_data_t
%000000    uvm_reg_field::get_reset(string kind = "HARD");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    if (!m_reset.exists(kind))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_reset.exists(kind)==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_reset.exists(kind)==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       return m_desired;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    return m_reset[kind];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endfunction: get_reset
        
        
        // set_reset
        
 000010 function void uvm_reg_field::set_reset(uvm_reg_data_t value,
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010                                        string kind = "HARD");
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
 000010    m_reset[kind] = value & ((1<<m_size) - 1);
+000010  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: set_reset
        
        
        // needs_update
        
%000000 function bit uvm_reg_field::needs_update();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    needs_update = (m_mirrored != m_desired);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: needs_update
        
        
        typedef class uvm_reg_map_info;
        
        
        // Xcheck_accessX
        
%000000 function bit uvm_reg_field::Xcheck_accessX(input uvm_reg_item rw,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000                                            output uvm_reg_map_info map_info,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                                   input string caller);
        
                                
%000000    if (rw.path == UVM_DEFAULT_PATH) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      uvm_reg_block blk = m_parent.get_block();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      rw.path = blk.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
%000000    if (rw.path == UVM_BACKDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       if (m_parent.get_backdoor() == null && !m_parent.has_hdl_path()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                 `uvm_warning("RegModel",
                    {"No backdoor access available for field '",get_full_name(),
%000000             "' . Using frontdoor instead."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          rw.path = UVM_FRONTDOOR;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
              end
              else
%000000         rw.map = uvm_reg_map::backdoor();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
%000000    if (rw.path != UVM_BACKDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      rw.local_map = m_parent.get_local_map(rw.map,caller);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      if (rw.local_map == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                `uvm_error(get_type_name(), 
                   {"No transactor available to physically access memory from map '",
%000000             rw.map.get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
             end
        
%000000      map_info = rw.local_map.get_reg_map_info(m_parent);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      if (map_info.frontdoor == null && map_info.unmapped) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                `uvm_error("RegModel", {"Field '",get_full_name(),
                           "' in register that is unmapped in map '",
                           rw.map.get_full_name(),
%000000                    "' and does not have a user-defined frontdoor"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         rw.status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
             end
        
%000000      if (rw.map == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000        rw.map = rw.local_map;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
%000000    return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // write
        
%000000 task uvm_reg_field::write(output uvm_status_e       status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                  input  uvm_reg_data_t     value,
                                  input  uvm_path_e         path = UVM_DEFAULT_PATH,
                                  input  uvm_reg_map        map = null,
                                  input  uvm_sequence_base  parent = null,
                                  input  int                prior = -1,
                                  input  uvm_object         extension = null,
                                  input  string             fname = "",
                                  input  int                lineno = 0);
        
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw = uvm_reg_item::type_id::create("field_write_item",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.element_kind = UVM_FIELD;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.kind         = UVM_WRITE;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.value[0]     = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.path         = path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.map          = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.prior        = prior;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    do_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endtask
        
        
        // do_write
        
%000000 task uvm_reg_field::do_write(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    uvm_reg_data_t   value_adjust;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    uvm_reg_field    fields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    bit bad_side_effect;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    m_parent.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_fname  = rw.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_lineno = rw.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    if (!Xcheck_accessX(rw,map_info,"write()"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    m_write_in_progress = 1'b1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    if (rw.value[0] >> m_size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_warning("RegModel", {"uvm_reg_field::write(): Value greater than field '",
%000000                           get_full_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       rw.value[0] &= ((1<<m_size)-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
           // Get values to write to the other fields in register
%000000    m_parent.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    foreach (fields[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000       if (fields[i] == this) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          value_adjust |= rw.value[0] << m_lsb;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
              end
        
              // It depends on what kind of bits they are made of...
%000000       case (fields[i].get_access(rw.local_map))
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                // These...
%000000         "RO", "RC", "RS", "W1C", "W1S", "W1T", "W1SRC", "W1CRC":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                  // Use all 0's
%000000           value_adjust |= 0;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
                // These...
%000000         "W0C", "W0S", "W0T", "W0SRC", "W0CRS":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
                  // Use all 1's
%000000           value_adjust |= ((1<<fields[i].get_n_bits())-1) << fields[i].get_lsb_pos();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
                // These might have side effects! Bad!
%000000         "WC", "WS", "WCRS", "WSRC", "WOC", "WOS":
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000            bad_side_effect = 1;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000         default:
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000            value_adjust |= fields[i].m_mirrored << fields[i].get_lsb_pos();
-000000  point: type=line comment=case hier=uvm_pkg::uvm_reg_field__Vclpkg
        
              endcase
           end
        
        `ifdef UVM_REG_NO_INDIVIDUAL_FIELD_ACCESS
           rw.element_kind = UVM_REG;
           rw.element = m_parent;
           rw.value[0] = value_adjust;
           m_parent.do_write(rw);   
        `else        
        
%000000    if (!is_indv_accessible(rw.path,rw.local_map)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       rw.element_kind = UVM_REG;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       rw.element = m_parent;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       rw.value[0] = value_adjust;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       m_parent.do_write(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000       if (bad_side_effect) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          `uvm_warning("RegModel", $sformatf("Writing field \"%s\" will cause unintended side effects in adjoining Write-to-Clear or Write-to-Set fields in the same register", this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              end
           end
%000000    else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      uvm_reg_map system_map = rw.local_map.get_root_map();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      uvm_reg_field_cb_iter cbs = new(this);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      m_parent.Xset_busyX(1);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      rw.status = UVM_IS_OK;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              
%000000      pre_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         cb.pre_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      if (rw.status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         m_write_in_progress = 1'b0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         m_parent.Xset_busyX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         m_parent.XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
             end
                    
%000000      rw.local_map.do_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      if (system_map.get_auto_predict())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                // ToDo: Call parent.XsampleX();
%000000         do_predict(rw, UVM_PREDICT_WRITE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      post_write(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         cb.post_write(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      m_parent.Xset_busyX(0);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              
           end
        
        `endif
        
%000000    m_write_in_progress = 1'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_parent.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endtask: do_write
        
        
        // read
        
%000000 task uvm_reg_field::read(output uvm_status_e       status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000                          output uvm_reg_data_t     value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                 input  uvm_path_e         path = UVM_DEFAULT_PATH,
                                 input  uvm_reg_map        map = null,
                                 input  uvm_sequence_base  parent = null,
                                 input  int                prior = -1,
                                 input  uvm_object         extension = null,
                                 input  string             fname = "",
                                 input  int                lineno = 0);
        
%000000    uvm_reg_item rw;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw = uvm_reg_item::type_id::create("field_read_item",,get_full_name());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.element      = this;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.element_kind = UVM_FIELD;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.kind         = UVM_READ;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.value[0]     = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.path         = path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.map          = map;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.parent       = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.prior        = prior;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.extension    = extension;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.fname        = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    rw.lineno       = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    do_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    value = rw.value[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    status = rw.status;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endtask: read
        
        
        // do_read
        
%000000 task uvm_reg_field::do_read(uvm_reg_item rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    uvm_reg_map_info map_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    bit bad_side_effect;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    m_parent.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_fname  = rw.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_lineno = rw.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_read_in_progress = 1'b1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
          
%000000    if (!Xcheck_accessX(rw,map_info,"read()"))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        `ifdef UVM_REG_NO_INDIVIDUAL_FIELD_ACCESS
           rw.element_kind = UVM_REG;
           rw.element = m_parent;
           m_parent.do_read(rw);
           rw.value[0] = (rw.value[0] >> m_lsb) & ((1<<m_size))-1;
           bad_side_effect = 1;
        `else
        
%000000    if (!is_indv_accessible(rw.path,rw.local_map)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       rw.element_kind = UVM_REG;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       rw.element = m_parent;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       bad_side_effect = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       m_parent.do_read(rw);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       rw.value[0] = (rw.value[0] >> m_lsb) & ((1<<m_size))-1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
%000000    else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      uvm_reg_map system_map = rw.local_map.get_root_map();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      uvm_reg_field_cb_iter cbs = new(this);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      m_parent.Xset_busyX(1);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      rw.status = UVM_IS_OK;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              
%000000      pre_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      for (uvm_reg_cbs cb = cbs.first(); cb != null; cb = cbs.next())
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         cb.pre_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      if (rw.status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         m_read_in_progress = 1'b0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         m_parent.Xset_busyX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         m_parent.XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000         return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
             end
                    
%000000      rw.local_map.do_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        
%000000      if (system_map.get_auto_predict())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                // ToDo: Call parent.XsampleX();
%000000         do_predict(rw, UVM_PREDICT_READ);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      post_read(rw);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      for (uvm_reg_cbs cb=cbs.first(); cb!=null; cb=cbs.next())
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         cb.post_read(rw);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      m_parent.Xset_busyX(0);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              
           end
        
        `endif
        
%000000    m_read_in_progress = 1'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_parent.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    if (bad_side_effect) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       uvm_reg_field fields[$];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       m_parent.get_fields(fields);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       foreach (fields[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          string mode;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          if (fields[i] == this)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          mode = fields[i].get_access();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          if (mode == "RC" ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                     mode == "RS" ||
                     mode == "WRC" ||
                     mode == "WRS" ||
                     mode == "WSRC" ||
                     mode == "WCRS" ||
                     mode == "W1SRC" ||
                     mode == "W1CRS" ||
%000000              mode == "W0SRC" ||
-000000  point: type=expr comment=((mode == %22RC%22)==0 && (mode == %22RS%22)==0 && (mode == %22WRC%22)==0 && (mode == %22WRS%22)==0 && (mode == %22WSRC%22)==0 && (mode == %22WCRS%22)==0 && (mode == %22W1SRC%22)==0 && (mode == %22W1CRS%22)==0 && (mode == %22W0SRC%22)==0 && (mode == %22W0CRS%22)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22RC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22RS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22W0CRS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22W0SRC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22W1CRS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22W1SRC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22WCRS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22WRC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22WRS%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((mode == %22WSRC%22)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000              mode == "W0CRS") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                    `uvm_warning("RegModel", {"Reading field '",get_full_name(),
                        "' will cause unintended side effects in adjoining ",
%000000                 "Read-to-Clear or Read-to-Set fields in the same register"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                 end
              end
           end
        
        endtask: do_read
                       
        
        // is_indv_accessible
        
%000000 function bit uvm_reg_field::is_indv_accessible(uvm_path_e  path,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                                       uvm_reg_map local_map);
%000000    if (path == UVM_BACKDOOR) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_warning("RegModel",
                 {"Individual BACKDOOR field access not available for field '",
%000000          get_full_name(), "'. Accessing complete register instead."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
%000000    if (!m_individually_accessible) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_individually_accessible==0) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(m_individually_accessible==1) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
                 `uvm_warning("RegModel",
                    {"Individual field access not available for field '",
%000000             get_full_name(), "'. Accessing complete register instead."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
           // Cannot access individual fields if the container register
           // has a user-defined front-door
%000000    if (m_parent.get_frontdoor(local_map) != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_warning("RegModel",
                           {"Individual field access not available for field '",
%000000                     get_name(), "' because register '", m_parent.get_full_name(), "' has a user-defined front-door. Accessing complete register instead."})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
           
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      uvm_reg_map system_map = local_map.get_root_map();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      uvm_reg_adapter adapter = system_map.get_adapter();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      if (adapter.supports_byte_enable)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000        return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      int fld_idx;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      int bus_width = local_map.get_n_bytes();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000      bit sole_field;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      m_parent.get_fields(fields);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000      if (fields.size() == 1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         sole_field = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
             end
%000000      else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         int prev_lsb,this_lsb,next_lsb; 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         int prev_sz,this_sz,next_sz; 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         int bus_sz = bus_width*8;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000         foreach (fields[i]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000            if (fields[i] == this) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000               fld_idx = i;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000               break;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                   end
                end
        
%000000         this_lsb = fields[fld_idx].get_lsb_pos();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000         this_sz  = fields[fld_idx].get_n_bits();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000         if (fld_idx>0) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000           prev_lsb = fields[fld_idx-1].get_lsb_pos();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000           prev_sz  = fields[fld_idx-1].get_n_bits();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                end
        
%000000         if (fld_idx < fields.size()-1) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000           next_lsb = fields[fld_idx+1].get_lsb_pos();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000           next_sz  = fields[fld_idx+1].get_n_bits();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                end
        
                // if first field in register
%000000         if (fld_idx == 0 &&
-000000  point: type=expr comment=(((next_lsb %25 bus_sz) == 32'sh0)==0 && ((next_lsb - this_sz) > (next_lsb %25 bus_sz))==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((fld_idx == 32'sh0)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((fld_idx == 32'sh0)==1 && ((next_lsb %25 bus_sz) == 32'sh0)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((fld_idx == 32'sh0)==1 && ((next_lsb - this_sz) > (next_lsb %25 bus_sz))==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_field__Vclpkg
                   ((next_lsb % bus_sz) == 0 ||
                    (next_lsb - this_sz) > (next_lsb % bus_sz)))
%000000            return 1;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_field__Vclpkg
        
                // if last field in register
%000000         else if (fld_idx == (fields.size()-1) &&
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
                    ((this_lsb % bus_sz) == 0 ||
                     (this_lsb - (prev_lsb + prev_sz)) >= (this_lsb % bus_sz)))
%000000            return 1;
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
        
                // if somewhere in between
%000000         else begin
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000            if ((this_lsb % bus_sz) == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000               if ((next_lsb % bus_sz) == 0 ||
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(((next_lsb %25 bus_sz) == 32'sh0)==0 && ((next_lsb - (this_lsb + this_sz)) >= (next_lsb %25 bus_sz))==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(((next_lsb %25 bus_sz) == 32'sh0)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(((next_lsb - (this_lsb + this_sz)) >= (next_lsb %25 bus_sz))==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
                          (next_lsb - (this_lsb + this_sz)) >= (next_lsb % bus_sz))
%000000                  return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                   end 
%000000            else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000               if ( (next_lsb - (this_lsb + this_sz)) >= (next_lsb % bus_sz) &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(((next_lsb - (this_lsb + this_sz)) >= (next_lsb %25 bus_sz))==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(((next_lsb - (this_lsb + this_sz)) >= (next_lsb %25 bus_sz))==1 && ((this_lsb - (prev_lsb + prev_sz)) >= (this_lsb %25 bus_sz))==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=(((this_lsb - (prev_lsb + prev_sz)) >= (this_lsb %25 bus_sz))==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
                          ((this_lsb - (prev_lsb + prev_sz)) >= (this_lsb % bus_sz)) )
%000000                  return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
                   end
                end
             end
           end
           
           `uvm_warning("RegModel", 
               {"Target bus does not support byte enabling, and the field '",
               get_full_name(),"' is not the only field within the entire bus width. ",
               "Individual field access will not be available. ",
%000000        "Accessing complete register instead."})
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endfunction
        
        
        // poke
        
%000000 task uvm_reg_field::poke(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                 input  uvm_reg_data_t    value,
                                 input  string            kind = "",
                                 input  uvm_sequence_base parent = null,
                                 input  uvm_object        extension = null,
                                 input  string            fname = "",
                                 input  int               lineno = 0);
%000000    uvm_reg_data_t  tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    if (value >> m_size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_warning("RegModel",
                 {"uvm_reg_field::poke(): Value exceeds size of field '",
%000000           get_name(),"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       value &= value & ((1<<m_size)-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
        
%000000    m_parent.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_parent.m_is_locked_by_field = 1'b1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    tmp = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
           // What is the current values of the other fields???
%000000    m_parent.peek(status, tmp, kind, parent, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    if (status == UVM_NOT_OK) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
              `uvm_error("RegModel", {"uvm_reg_field::poke(): Peek of register '",
%000000          m_parent.get_full_name(),"' returned status ",status.name()})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       m_parent.XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       m_parent.m_is_locked_by_field = 1'b0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        
           // Force the value for this field then poke the resulting value
%000000    tmp &= ~(((1<<m_size)-1) << m_lsb);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    tmp |= value << m_lsb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_parent.poke(status, tmp, kind, parent, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    m_parent.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_parent.m_is_locked_by_field = 1'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endtask: poke
        
        
        // peek
        
%000000 task uvm_reg_field::peek(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000                          output uvm_reg_data_t    value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                 input  string            kind = "",
                                 input  uvm_sequence_base parent = null,
                                 input  uvm_object        extension = null,
                                 input  string            fname = "",
                                 input  int               lineno = 0);
%000000    uvm_reg_data_t  reg_value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    m_parent.peek(status, reg_value, kind, parent, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    value = (reg_value >> m_lsb) & ((1<<m_size))-1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
        endtask: peek
                       
        
        // mirror
        
%000000 task uvm_reg_field::mirror(output uvm_status_e      status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                   input  uvm_check_e       check = UVM_NO_CHECK,
                                   input  uvm_path_e        path = UVM_DEFAULT_PATH,
                                   input  uvm_reg_map       map = null,
                                   input  uvm_sequence_base parent = null,
                                   input  int               prior = -1,
                                   input  uvm_object        extension = null,
                                   input  string            fname = "",
                                   input  int               lineno = 0);
%000000    m_fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_parent.mirror(status, check, path, map, parent, prior, extension,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000                       fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endtask: mirror
        
        
        // set_compare
        
%000000 function void uvm_reg_field::set_compare(uvm_check_e check=UVM_CHECK);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000   m_check = check;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // get_compare
        
%000000 function uvm_check_e uvm_reg_field::get_compare();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000   return m_check;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        // pre_randomize
        
%000000 function void uvm_reg_field::pre_randomize();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
           // Update the only publicly known property with the current
           // desired value so it can be used as a state variable should
           // the rand_mode of the field be turned off.
%000000    value = m_desired;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: pre_randomize
        
        
        // post_randomize
        
%000000 function void uvm_reg_field::post_randomize();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    m_desired = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction: post_randomize
        
        
        // do_print
        
%000000 function void uvm_reg_field::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000   printer.print_generic(get_name(), get_type_name(), -1, convert2string());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // convert2string
        
%000000 function string uvm_reg_field::convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    string fmt;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    string res_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    string t_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    bit with_debug_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    string prefix;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    uvm_reg reg_=get_register();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        
%000000    $sformat(fmt, "%0d'h%%%0dh", get_n_bits(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             (get_n_bits()-1)/4 + 1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000    $sformat(convert2string, {"%s %s %s[%0d:%0d]=",fmt,"%s"}, prefix,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             get_access(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             reg_.get_name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             get_lsb_pos() + get_n_bits() - 1,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             get_lsb_pos(), m_desired,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000             (m_desired != m_mirrored) ? $sformatf({" (Mirror: ",fmt,")"},
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((m_desired != m_mirrored)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((m_desired != m_mirrored)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
                       m_mirrored) : ""); 
        
%000000    if (m_read_in_progress == 1'b1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       if (m_fname != "" && m_lineno != 0)
-000000  point: type=expr comment=((m_fname != %22%22)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((m_fname != %22%22)==1 && (m_lineno != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((m_lineno != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          $sformat(res_str, " from %s:%0d",m_fname, m_lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       convert2string = {convert2string, "\n", "currently being read", res_str}; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
%000000    if (m_write_in_progress == 1'b1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       if (m_fname != "" && m_lineno != 0)
-000000  point: type=expr comment=((m_fname != %22%22)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((m_fname != %22%22)==1 && (m_lineno != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=expr comment=((m_lineno != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000          $sformat(res_str, " from %s:%0d",m_fname, m_lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000       convert2string = {convert2string, "\n", res_str, "currently being written"}; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
           end
        endfunction: convert2string
        
        
        // clone
        
%000000 function uvm_object uvm_reg_field::clone();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel field cannot be cloned")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        // do_copy
        
%000000 function void uvm_reg_field::do_copy(uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000   `uvm_warning("RegModel","RegModel field copy not yet implemented")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
          // just a set(rhs.get()) ?
        endfunction
        
        
        // do_compare
        
%000000 function bit uvm_reg_field::do_compare (uvm_object  rhs,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
                                                uvm_comparer comparer);
%000000   `uvm_warning("RegModel","RegModel field compare not yet implemented")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
          // just a return (get() == rhs.get()) ?
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // do_pack
        
%000000 function void uvm_reg_field::do_pack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000   `uvm_warning("RegModel","RegModel field cannot be packed")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
        // do_unpack
        
%000000 function void uvm_reg_field::do_unpack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
%000000   `uvm_warning("RegModel","RegModel field cannot be unpacked")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_field__Vclpkg
        endfunction
        
        
