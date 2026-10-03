//      // verilator_coverage annotation
        //
        // -------------------------------------------------------------
        //    Copyright 2004-2009 Synopsys, Inc.
        //    Copyright 2010 Mentor Graphics Corporation
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
        
        
        //------------------------------------------------------------------------------
        // Title: Virtual Register Field Classes
        //
        // This section defines the virtual field and callback classes.
        //
        // A virtual field is set of contiguous bits in one or more memory locations.
        // The semantics and layout of virtual fields comes from
        // an agreement between the software and the hardware,
        // not any physical structures in the DUT. 
        //
        //------------------------------------------------------------------------------
        
        typedef class uvm_vreg_field_cbs;
        
        
        //------------------------------------------------------------------------------
        // Class: uvm_vreg_field
        //
        // Virtual field abstraction class
        //
        // A virtual field represents a set of adjacent bits that are
        // logically implemented in consecutive memory locations.
        //
        //------------------------------------------------------------------------------
        
        class uvm_vreg_field extends uvm_object;
        
%000001    `uvm_object_utils(uvm_vreg_field)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000001    `uvm_register_cb(uvm_vreg_field, uvm_vreg_field_cbs)
-000001  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           
           local uvm_vreg parent;
           local int unsigned lsb;
           local int unsigned size;
           local string fname;
           local int lineno;
           local bit read_in_progress;
           local bit write_in_progress;
        
        
           //
           // Group: initialization
           //
        
           //
           // Function: new
           // Create a new virtual field instance
           //
           // This method should not be used directly.
           // The uvm_vreg_field::type_id::create() method should be used instead.
           //
           extern function new(string name = "uvm_vreg_field");
        
           //
           // Function: configure
           // Instance-specific configuration
           //
           // Specify the ~parent~ virtual register of this virtual field, its
           // ~size~ in bits, and the position of its least-significant bit
           // within the virtual register relative to the least-significant bit
           // of the virtual register.
           //
           extern function void configure(uvm_vreg parent,
                                          int unsigned size,
                                          int unsigned lsb_pos);
        
        
           //
           // Group: Introspection
           //
        
           //
           // Function: get_name
           // Get the simple name
           //
           // Return the simple object name of this virtual field
           //
        
           //
           // Function: get_full_name
           // Get the hierarchical name
           //
           // Return the hierarchal name of this virtual field
           // The base of the hierarchical name is the root block.
           //
           extern virtual function string        get_full_name();
        
           //
           // FUNCTION: get_parent
           // Get the parent virtual register
           //
           extern virtual function uvm_vreg get_parent();
           extern virtual function uvm_vreg get_register();
        
           //
           // FUNCTION: get_lsb_pos_in_register
           // Return the position of the virtual field
           ///
           // Returns the index of the least significant bit of the virtual field
           // in the virtual register that instantiates it.
           // An offset of 0 indicates a field that is aligned with the
           // least-significant bit of the register. 
           //
           extern virtual function int unsigned get_lsb_pos_in_register();
        
           //
           // FUNCTION: get_n_bits
           // Returns the width, in bits, of the virtual field. 
           //
           extern virtual function int unsigned get_n_bits();
        
           //
           // FUNCTION: get_access
           // Returns the access policy of the virtual field register
           // when written and read via an address map.
           //
           // If the memory implementing the virtual field
           // is mapped in more than one address map,
           // an address ~map~ must be specified.
           // If access restrictions are present when accessing a memory
           // through the specified address map, the access mode returned
           // takes the access restrictions into account.
           // For example, a read-write memory accessed
           // through an address map with read-only restrictions would return "RO". 
           //
           extern virtual function string get_access(uvm_reg_map map = null);
        
        
           //
           // Group: HDL Access
           //
        
           //
           // TASK: write
           // Write the specified value in a virtual field
           //
           // Write ~value~ in the DUT memory location(s) that implements
           // the virtual field that corresponds to this
           // abstraction class instance using the specified access
           // ~path~. 
           //
           // If the memory implementing the virtual register array
           // containing this virtual field
           // is mapped in more than one address map, 
           // an address ~map~ must be
           // specified if a physical access is used (front-door access).
           //
           // The operation is eventually mapped into
           // memory read-modify-write operations at the location
           // where the virtual register
           // specified by ~idx~ in the virtual register array is implemented.
           // If a backdoor is available for the memory implemeting the
           // virtual field, it will be used for the memory-read operation.
           //
           extern virtual task write(input  longint unsigned   idx,
                                     output uvm_status_e  status,
                                     input  uvm_reg_data_t     value,
                                     input  uvm_path_e    path = UVM_DEFAULT_PATH,
                                     input  uvm_reg_map        map = null,
                                     input  uvm_sequence_base  parent = null,
                                     input  uvm_object         extension = null,
                                     input  string             fname = "",
                                     input  int                lineno = 0);
        
           //
           // TASK: read
           // Read the current value from a virtual field
           //
           // Read from the DUT memory location(s) that implements
           // the virtual field that corresponds to this
           // abstraction class instance using the specified access
           // ~path~, and return the readback ~value~.
           //
           // If the memory implementing the virtual register array
           // containing this virtual field
           // is mapped in more than one address map, 
           // an address ~map~ must be
           // specified if a physical access is used (front-door access).
           //
           // The operation is eventually mapped into
           // memory read operations at the location(s)
           // where the virtual register
           // specified by ~idx~ in the virtual register array is implemented.
           //
           extern virtual task read(input  longint unsigned    idx,
                                    output uvm_status_e   status,
                                    output uvm_reg_data_t      value,
                                    input  uvm_path_e     path = UVM_DEFAULT_PATH,
                                    input  uvm_reg_map         map = null,
                                    input  uvm_sequence_base   parent = null,
                                    input  uvm_object          extension = null,
                                    input  string              fname = "",
                                    input  int                 lineno = 0);
                       
        
           //
           // TASK: poke
           // Deposit the specified value in a virtual field
           //
           // Deposit ~value~ in the DUT memory location(s) that implements
           // the virtual field that corresponds to this
           // abstraction class instance using the specified access
           // ~path~. 
           //
           // The operation is eventually mapped into
           // memory peek-modify-poke operations at the location
           // where the virtual register
           // specified by ~idx~ in the virtual register array is implemented.
           //
           extern virtual task poke(input  longint unsigned    idx,
                                    output uvm_status_e   status,
                                    input  uvm_reg_data_t      value,
                                    input  uvm_sequence_base   parent = null,
                                    input  uvm_object          extension = null,
                                    input  string              fname = "",
                                    input  int                 lineno = 0);
        
           //
           // TASK: peek
           // Sample the current value from a virtual field
           //
           // Sample from the DUT memory location(s) that implements
           // the virtual field that corresponds to this
           // abstraction class instance using the specified access
           // ~path~, and return the readback ~value~.
           //
           // If the memory implementing the virtual register array
           // containing this virtual field
           // is mapped in more than one address map, 
           // an address ~map~ must be
           // specified if a physical access is used (front-door access).
           //
           // The operation is eventually mapped into
           // memory peek operations at the location(s)
           // where the virtual register
           // specified by ~idx~ in the virtual register array is implemented.
           //
           extern virtual task peek(input  longint unsigned    idx,
                                    output uvm_status_e   status,
                                    output uvm_reg_data_t      value,
                                    input  uvm_sequence_base   parent = null,
                                    input  uvm_object          extension = null,
                                    input  string              fname = "",
                                    input  int                 lineno = 0);
        
           //
           // Group: Callbacks
           //
        
        
           //
           // TASK: pre_write
           // Called before virtual field write.
           //
           // If the specified data value, access ~path~ or address ~map~ are modified,
           // the updated data value, access path or address map will be used
           // to perform the virtual register operation.
           //
           // The virtual field callback methods are invoked before the callback methods
           // on the containing virtual register.
           // The registered callback methods are invoked after the invocation
           // of this method.
           // The pre-write virtual register and field callbacks are executed
           // before the corresponding pre-write memory callbacks
           //
%000000    virtual task pre_write(longint unsigned     idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                  ref uvm_reg_data_t   wdat,
                                  ref uvm_path_e  path,
                                  ref uvm_reg_map   map);
           endtask: pre_write
        
           //
           // TASK: post_write
           // Called after virtual field write
           //
           // If the specified ~status~ is modified,
           // the updated status will be
           // returned by the virtual register operation.
           //
           // The virtual field callback methods are invoked after the callback methods
           // on the containing virtual register.
           // The registered callback methods are invoked before the invocation
           // of this method.
           // The post-write virtual register and field callbacks are executed
           // after the corresponding post-write memory callbacks
           //
%000000    virtual task post_write(longint unsigned       idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                   uvm_reg_data_t         wdat,
                                   uvm_path_e        path,
                                   uvm_reg_map         map,
                                   ref uvm_status_e  status);
           endtask: post_write
        
           //
           // TASK: pre_read
           // Called before virtual field read.
           //
           // If the specified access ~path~ or address ~map~ are modified,
           // the updated access path or address map will be used to perform
           // the virtual register operation.
           //
           // The virtual field callback methods are invoked after the callback methods
           // on the containing virtual register.
           // The registered callback methods are invoked after the invocation
           // of this method.
           // The pre-read virtual register and field callbacks are executed
           // before the corresponding pre-read memory callbacks
           //
%000000    virtual task pre_read(longint unsigned      idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                 ref uvm_path_e   path,
                                 ref uvm_reg_map    map);
           endtask: pre_read
        
           //
           // TASK: post_read
           // Called after virtual field read.
           //
           // If the specified readback data ~rdat~ or ~status~ is modified,
           // the updated readback data or status will be
           // returned by the virtual register operation.
           //
           // The virtual field callback methods are invoked after the callback methods
           // on the containing virtual register.
           // The registered callback methods are invoked before the invocation
           // of this method.
           // The post-read virtual register and field callbacks are executed
           // after the corresponding post-read memory callbacks
           //
%000000    virtual task post_read(longint unsigned       idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                  ref uvm_reg_data_t     rdat,
                                  uvm_path_e        path,
                                  uvm_reg_map         map,
                                  ref uvm_status_e  status);
           endtask: post_read
        
        
           extern virtual function void do_print (uvm_printer printer);
           extern virtual function string convert2string;
           extern virtual function uvm_object clone();
           extern virtual function void do_copy   (uvm_object rhs);
           extern virtual function bit do_compare (uvm_object  rhs,
                                                  uvm_comparer comparer);
           extern virtual function void do_pack (uvm_packer packer);
           extern virtual function void do_unpack (uvm_packer packer);
        
        endclass: uvm_vreg_field
        
        
        //------------------------------------------------------------------------------
        // Class: uvm_vreg_field_cbs
        //
        // Pre/post read/write callback facade class
        //
        //------------------------------------------------------------------------------
        
        class uvm_vreg_field_cbs extends uvm_callback;
           string fname;
           int    lineno;
        
%000000    function new(string name = "uvm_vreg_field_cbs");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field_cbs__Vclpkg
%000000       super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field_cbs__Vclpkg
           endfunction
           
        
           //
           // Task: pre_write
           // Callback called before a write operation.
           //
           // The registered callback methods are invoked before the invocation
           // of the virtual register pre-write callbacks and
           // after the invocation of the <uvm_vreg_field::pre_write()> method.
           //
           // The written value ~wdat~, access ~path~ and address ~map~,
           // if modified, modifies the actual value, access path or address map
           // used in the register operation.
           //
%000000    virtual task pre_write(uvm_vreg_field       field,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field_cbs__Vclpkg
                                  longint unsigned     idx,
                                  ref uvm_reg_data_t   wdat,
                                  ref uvm_path_e  path,
                                  ref uvm_reg_map   map);
           endtask: pre_write
        
        
           //
           // TASK: post_write
           // Called after a write operation
           //
           // The registered callback methods are invoked after the invocation
           // of the virtual register post-write callbacks and
           // before the invocation of the <uvm_vreg_field::post_write()> method.
           //
           // The ~status~ of the operation,
           // if modified, modifies the actual returned status.
           //
%000000    virtual task post_write(uvm_vreg_field        field,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field_cbs__Vclpkg
                                   longint unsigned      idx,
                                   uvm_reg_data_t        wdat,
                                   uvm_path_e       path,
                                   uvm_reg_map        map,
                                   ref uvm_status_e status);
           endtask: post_write
        
        
           //
           // TASK: pre_read
           // Called before a virtual field read.
           //
           // The registered callback methods are invoked after the invocation
           // of the virtual register pre-read callbacks and
           // after the invocation of the <uvm_vreg_field::pre_read()> method.
           //
           // The access ~path~ and address ~map~,
           // if modified, modifies the actual access path or address map
           // used in the register operation.
           //
%000000    virtual task pre_read(uvm_vreg_field        field,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field_cbs__Vclpkg
                                 longint unsigned      idx,
                                 ref uvm_path_e   path,
                                 ref uvm_reg_map    map);
           endtask: pre_read
        
        
           //
           // TASK: post_read
           // Called after a virtual field read.
           //
           // The registered callback methods are invoked after the invocation
           // of the virtual register post-read callbacks and
           // before the invocation of the <uvm_vreg_field::post_read()> method.
           //
           // The readback value ~rdat~ and the ~status~ of the operation,
           // if modified, modifies the actual returned readback value and status.
           //
%000000    virtual task post_read(uvm_vreg_field         field,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field_cbs__Vclpkg
                                  longint unsigned       idx,
                                  ref uvm_reg_data_t     rdat,
                                  uvm_path_e        path,
                                  uvm_reg_map         map,
                                  ref uvm_status_e  status);
           endtask: post_read
        endclass: uvm_vreg_field_cbs
        
        
        //
        // Type: uvm_vreg_field_cb
        // Convenience callback type declaration
        //
        // Use this declaration to register virtual field callbacks rather than
        // the more verbose parameterized class
        //
        typedef uvm_callbacks#(uvm_vreg_field, uvm_vreg_field_cbs) uvm_vreg_field_cb;
        
        //
        // Type: uvm_vreg_field_cb_iter
        // Convenience callback iterator type declaration
        //
        // Use this declaration to iterate over registered virtual field callbacks
        // rather than the more verbose parameterized class
        //
        typedef uvm_callback_iter#(uvm_vreg_field, uvm_vreg_field_cbs) uvm_vreg_field_cb_iter;
        
        
        
        
%000000 function uvm_vreg_field::new(string name="uvm_vreg_field");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction: new
        
%000000 function void uvm_vreg_field::configure(uvm_vreg  parent,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                           int unsigned  size,
                                           int unsigned  lsb_pos);
%000000    this.parent = parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (size == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       `uvm_error("RegModel", $sformatf("Virtual field \"%s\" cannot have 0 bits", this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       size = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
%000000    if (size > `UVM_REG_DATA_WIDTH) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
              `uvm_error("RegModel", $sformatf("Virtual field \"%s\" cannot have more than %0d bits",
                                             this.get_full_name(),
%000000                                      `UVM_REG_DATA_WIDTH));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       size = `UVM_REG_DATA_WIDTH;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    this.size   = size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lsb    = lsb_pos;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.parent.add_field(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction: configure
        
        
        
%000000 function string uvm_vreg_field::get_full_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    get_full_name = {this.parent.get_full_name(), ".", this.get_name()};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction: get_full_name
        
        
%000000 function uvm_vreg uvm_vreg_field::get_register();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    get_register = this.parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction: get_register
        
        
%000000 function uvm_vreg uvm_vreg_field::get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    get_parent = this.parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction: get_parent
        
        
        
%000000 function int unsigned uvm_vreg_field::get_lsb_pos_in_register();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    get_lsb_pos_in_register = this.lsb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction: get_lsb_pos_in_register
        
        
%000000 function int unsigned uvm_vreg_field::get_n_bits();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    get_n_bits = this.size;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction: get_n_bits
        
        
%000000 function string uvm_vreg_field::get_access(uvm_reg_map map = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (this.parent.get_memory() == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
              `uvm_error("RegModel", $sformatf("Cannot call uvm_vreg_field::get_rights() on unimplemented virtual field \"%s\"",
%000000                                      this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       return "RW";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    return this.parent.get_access(map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction: get_access
        
        
%000000 task uvm_vreg_field::write(input  longint unsigned    idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000                            output uvm_status_e   status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                   input  uvm_reg_data_t      value,
                                   input  uvm_path_e     path = UVM_DEFAULT_PATH,
                                   input  uvm_reg_map      map = null,
                                   input  uvm_sequence_base   parent = null,
                                   input  uvm_object          extension = null,
                                   input  string              fname = "",
                                   input  int                 lineno = 0);
%000000    uvm_reg_data_t  tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_reg_data_t  segval;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_reg_addr_t  segoff;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_status_e st;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    int flsb, fmsb, rmwbits;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    int segsiz, segn;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_mem    mem;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_path_e rm_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    uvm_vreg_field_cb_iter cbs = new(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    write_in_progress = 1'b1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    mem = this.parent.get_memory();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (mem == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
              `uvm_error("RegModel", $sformatf("Cannot call uvm_vreg_field::write() on unimplemented virtual register \"%s\"",
%000000                                      this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    if (path == UVM_DEFAULT_PATH) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       uvm_reg_block blk = this.parent.get_block();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       path = blk.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.parent.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    if (value >> this.size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       `uvm_warning("RegModel", $sformatf("Writing value 'h%h that is greater than field \"%s\" size (%0d bits)", value, this.get_full_name(), this.get_n_bits()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       value &= value & ((1<<this.size)-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
%000000    tmp = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.pre_write(idx, value, path, map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    for (uvm_vreg_field_cbs cb = cbs.first(); cb != null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000         cb = cbs.next()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.fname = this.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.lineno = this.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.pre_write(this, idx, value, path, map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    segsiz = mem.get_n_bytes() * 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    flsb    = this.get_lsb_pos_in_register();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    segoff  = this.parent.get_offset_in_memory(idx) + (flsb / segsiz);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Favor backdoor read to frontdoor read for the RMW operation
%000000    rm_path = UVM_DEFAULT_PATH;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (mem.get_backdoor() != null) rm_path = UVM_BACKDOOR;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Any bits on the LSB side we need to RMW?
%000000    rmwbits = flsb % segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Total number of memory segment in this field
%000000    segn = (rmwbits + this.get_n_bits() - 1) / segsiz + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    if (rmwbits > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       uvm_reg_addr_t  segn;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       mem.read(st, segoff, tmp, rm_path, map, parent, , extension, fname, lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (st != UVM_IS_OK && st != UVM_HAS_X) begin
-000000  point: type=expr comment=((st != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
                 `uvm_error("RegModel",
                            $sformatf("Unable to read LSB bits in %s[%0d] to for RMW cycle on virtual field %s.",
%000000                               mem.get_full_name(), segoff, this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          this.parent.XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
              end
        
%000000       value = (value << rmwbits) | (tmp & ((1<<rmwbits)-1));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
           // Any bits on the MSB side we need to RMW?
%000000    fmsb = rmwbits + this.get_n_bits() - 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    rmwbits = (fmsb+1) % segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (rmwbits > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (segn > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          mem.read(st, segoff + segn - 1, tmp, rm_path, map, parent,, extension, fname, lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          if (st != UVM_IS_OK && st != UVM_HAS_X) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
                    `uvm_error("RegModel",
                               $sformatf("Unable to read MSB bits in %s[%0d] to for RMW cycle on virtual field %s.",
                                         mem.get_full_name(), segoff+segn-1,
%000000                                  this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             this.parent.XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
                 end
              end
%000000       value |= (tmp & ~((1<<rmwbits)-1)) << ((segn-1)*segsiz);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
           // Now write each of the segments
%000000    tmp = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    repeat (segn) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       mem.write(st, segoff, tmp, path, map, parent,, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (st != UVM_IS_OK && st != UVM_HAS_X) status = UVM_NOT_OK;
-000000  point: type=expr comment=((st != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       segoff++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       tmp = tmp >> segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    this.post_write(idx, value, path, map, status);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    for (uvm_vreg_field_cbs cb = cbs.first(); cb != null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000         cb = cbs.next()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.fname = this.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.lineno = this.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.post_write(this, idx, value, path, map, status);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    this.parent.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
        
           `uvm_info("RegModel", $sformatf("Wrote virtual field \"%s\"[%0d] via %s with: 'h%h",
                                      this.get_full_name(), idx,
                                      (path == UVM_FRONTDOOR) ? "frontdoor" : "backdoor",
%000000                               value),UVM_MEDIUM); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((path == uvm_pkg::UVM_FRONTDOOR)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((path == uvm_pkg::UVM_FRONTDOOR)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
           
%000000    write_in_progress = 1'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.fname = "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lineno = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endtask: write
        
        
%000000 task uvm_vreg_field::read(input longint unsigned     idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000                           output uvm_status_e   status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000                           output uvm_reg_data_t      value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                  input  uvm_path_e     path = UVM_DEFAULT_PATH,
                                  input  uvm_reg_map      map = null,
                                  input  uvm_sequence_base   parent = null,
                                  input  uvm_object          extension = null,
                                  input  string              fname = "",
                                  input  int                 lineno = 0);
%000000    uvm_reg_data_t  tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_reg_data_t  segval;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_reg_addr_t  segoff;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_status_e st;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    int flsb, lsb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    int segsiz, segn;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_mem    mem;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    uvm_vreg_field_cb_iter cbs = new(this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    read_in_progress = 1'b1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    mem = this.parent.get_memory();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (mem == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
              `uvm_error("RegModel", $sformatf("Cannot call uvm_vreg_field::read() on unimplemented virtual register \"%s\"",
%000000                                      this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    if (path == UVM_DEFAULT_PATH) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       uvm_reg_block blk = this.parent.get_block();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       path = blk.get_default_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.parent.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    value = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.pre_read(idx, path, map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    for (uvm_vreg_field_cbs cb = cbs.first(); cb != null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000         cb = cbs.next()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.fname = this.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.lineno = this.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.pre_read(this, idx, path, map);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    segsiz = mem.get_n_bytes() * 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    flsb    = this.get_lsb_pos_in_register();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    segoff  = this.parent.get_offset_in_memory(idx) + (flsb / segsiz);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    lsb = flsb % segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Total number of memory segment in this field
%000000    segn = (lsb + this.get_n_bits() - 1) / segsiz + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Read each of the segments, MSB first
%000000    segoff += segn - 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    repeat (segn) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       value = value << segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       mem.read(st, segoff, tmp, path, map, parent, , extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (st != UVM_IS_OK && st != UVM_HAS_X) status = UVM_NOT_OK;
-000000  point: type=expr comment=((st != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       segoff--;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       value |= tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
           // Any bits on the LSB side we need to get rid of?
%000000    value = value >> lsb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Any bits on the MSB side we need to get rid of?
%000000    value &= (1<<this.get_n_bits()) - 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.post_read(idx, value, path, map, status);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    for (uvm_vreg_field_cbs cb = cbs.first(); cb != null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000         cb = cbs.next()) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.fname = this.fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.lineno = this.lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       cb.post_read(this, idx, value, path, map, status);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    this.parent.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           `uvm_info("RegModel", $sformatf("Read virtual field \"%s\"[%0d] via %s: 'h%h",
                                      this.get_full_name(), idx,
                                      (path == UVM_FRONTDOOR) ? "frontdoor" : "backdoor",
%000000                               value),UVM_MEDIUM);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((path == uvm_pkg::UVM_FRONTDOOR)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((path == uvm_pkg::UVM_FRONTDOOR)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
        
%000000    read_in_progress = 1'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.fname = "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lineno = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endtask: read
                       
        
%000000 task uvm_vreg_field::poke(input  longint unsigned  idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000                           output uvm_status_e status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                  input  uvm_reg_data_t    value,
                                  input  uvm_sequence_base parent = null,
                                  input  uvm_object        extension = null,
                                  input  string            fname = "",
                                  input  int               lineno = 0);
%000000    uvm_reg_data_t  tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_reg_data_t  segval;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_reg_addr_t  segoff;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_status_e st;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    int flsb, fmsb, rmwbits;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    int segsiz, segn;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_mem    mem;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_path_e rm_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    mem = this.parent.get_memory();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (mem == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
              `uvm_error("RegModel", $sformatf("Cannot call uvm_vreg_field::poke() on unimplemented virtual register \"%s\"",
%000000                                      this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.parent.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    if (value >> this.size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       `uvm_warning("RegModel", $sformatf("Writing value 'h%h that is greater than field \"%s\" size (%0d bits)", value, this.get_full_name(), this.get_n_bits()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       value &= value & ((1<<this.size)-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
%000000    tmp = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    segsiz = mem.get_n_bytes() * 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    flsb    = this.get_lsb_pos_in_register();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    segoff  = this.parent.get_offset_in_memory(idx) + (flsb / segsiz);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Any bits on the LSB side we need to RMW?
%000000    rmwbits = flsb % segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Total number of memory segment in this field
%000000    segn = (rmwbits + this.get_n_bits() - 1) / segsiz + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    if (rmwbits > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       uvm_reg_addr_t  segn;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       mem.peek(st, segoff, tmp, "", parent, extension, fname, lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (st != UVM_IS_OK && st != UVM_HAS_X) begin
-000000  point: type=expr comment=((st != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
                 `uvm_error("RegModel",
                            $sformatf("Unable to read LSB bits in %s[%0d] to for RMW cycle on virtual field %s.",
%000000                               mem.get_full_name(), segoff, this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          this.parent.XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
              end
        
%000000       value = (value << rmwbits) | (tmp & ((1<<rmwbits)-1));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
           // Any bits on the MSB side we need to RMW?
%000000    fmsb = rmwbits + this.get_n_bits() - 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    rmwbits = (fmsb+1) % segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (rmwbits > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (segn > 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          mem.peek(st, segoff + segn - 1, tmp, "", parent, extension, fname, lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          if (st != UVM_IS_OK && st != UVM_HAS_X) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
                    `uvm_error("RegModel",
                               $sformatf("Unable to read MSB bits in %s[%0d] to for RMW cycle on virtual field %s.",
                                         mem.get_full_name(), segoff+segn-1,
%000000                                  this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             this.parent.XatomicX(0);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
                 end
              end
%000000       value |= (tmp & ~((1<<rmwbits)-1)) << ((segn-1)*segsiz);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
           // Now write each of the segments
%000000    tmp = value;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    repeat (segn) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       mem.poke(st, segoff, tmp, "", parent, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (st != UVM_IS_OK && st != UVM_HAS_X) status = UVM_NOT_OK;
-000000  point: type=expr comment=((st != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       segoff++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       tmp = tmp >> segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    this.parent.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           `uvm_info("RegModel", $sformatf("Wrote virtual field \"%s\"[%0d] with: 'h%h",
%000000                               this.get_full_name(), idx, value),UVM_MEDIUM);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.fname = "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lineno = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endtask: poke
        
        
%000000 task uvm_vreg_field::peek(input  longint unsigned  idx,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000                           output uvm_status_e status,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000                           output uvm_reg_data_t    value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                  input  uvm_sequence_base parent = null,
                                  input  uvm_object        extension = null,
                                  input  string            fname = "",
                                  input  int               lineno = 0);
%000000    uvm_reg_data_t  tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_reg_data_t  segval;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_reg_addr_t  segoff;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_status_e st;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    int flsb, lsb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    int segsiz, segn;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    uvm_mem    mem;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.fname = fname;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lineno = lineno;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    mem = this.parent.get_memory();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (mem == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
              `uvm_error("RegModel", $sformatf("Cannot call uvm_vreg_field::peek() on unimplemented virtual register \"%s\"",
%000000                                      this.get_full_name()));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       status = UVM_NOT_OK;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
%000000    status = UVM_IS_OK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.parent.XatomicX(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    value = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    segsiz = mem.get_n_bytes() * 8;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    flsb    = this.get_lsb_pos_in_register();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    segoff  = this.parent.get_offset_in_memory(idx) + (flsb / segsiz);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    lsb = flsb % segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Total number of memory segment in this field
%000000    segn = (lsb + this.get_n_bits() - 1) / segsiz + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Read each of the segments, MSB first
%000000    segoff += segn - 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    repeat (segn) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       value = value << segsiz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       mem.peek(st, segoff, tmp, "", parent, extension, fname, lineno);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       if (st != UVM_IS_OK && st != UVM_HAS_X) status = UVM_NOT_OK;
-000000  point: type=expr comment=((st != uvm_pkg::UVM_HAS_X)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((st != uvm_pkg::UVM_IS_OK)==1 && (st != uvm_pkg::UVM_HAS_X)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000       segoff--;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       value |= tmp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
           // Any bits on the LSB side we need to get rid of?
%000000    value = value >> lsb;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
           // Any bits on the MSB side we need to get rid of?
%000000    value &= (1<<this.get_n_bits()) - 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.parent.XatomicX(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    `uvm_info("RegModel", $sformatf("Peeked virtual field \"%s\"[%0d]: 'h%h", this.get_full_name(), idx, value),UVM_MEDIUM);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
        
%000000    this.fname = "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    this.lineno = 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endtask: peek
                       
        
%000000 function void uvm_vreg_field::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000   super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000   printer.print_generic("initiator", parent.get_type_name(), -1, convert2string());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction
        
%000000 function string uvm_vreg_field::convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    string res_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    string t_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    bit with_debug_info = 1'b0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    $sformat(convert2string, {"%s[%0d-%0d]"},
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             this.get_name(),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             this.get_lsb_pos_in_register() + this.get_n_bits() - 1,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000             this.get_lsb_pos_in_register());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000    if (read_in_progress == 1'b1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (fname != "" && lineno != 0)
-000000  point: type=expr comment=((fname != %22%22)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((fname != %22%22)==1 && (lineno != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((lineno != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          $sformat(res_str, "%s:%0d ",fname, lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       convert2string = {convert2string, "\n", res_str, "currently executing read method"}; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
%000000    if ( write_in_progress == 1'b1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       if (fname != "" && lineno != 0)
-000000  point: type=expr comment=((fname != %22%22)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((fname != %22%22)==1 && (lineno != 32'sh0)==1) => 1 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=expr comment=((lineno != 32'sh0)==0) => 0 hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000          $sformat(res_str, "%s:%0d ",fname, lineno);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000       convert2string = {convert2string, "\n", res_str, "currently executing write method"}; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_vreg_field__Vclpkg
           end
        
        endfunction
        
        //TODO - add fatal messages
        
%000000 function uvm_object uvm_vreg_field::clone();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction
        
%000000 function void uvm_vreg_field::do_copy   (uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction
        
%000000 function bit uvm_vreg_field::do_compare (uvm_object  rhs,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
                                                uvm_comparer comparer);
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction
        
%000000 function void uvm_vreg_field::do_pack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction
        
%000000 function void uvm_vreg_field::do_unpack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_vreg_field__Vclpkg
        endfunction
        
        
        
