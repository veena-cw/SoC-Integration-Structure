//      // verilator_coverage annotation
        //
        // -------------------------------------------------------------
        //    Copyright 2010 Synopsys, Inc.
        //    Copyright 2010 Mentor Graphics Corporation
        //    Copyright 2010 Cadence Design Systems, Inc.
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
        
        
        //
        // CLASS: uvm_reg_file
        // Register file abstraction base class
        //
        // A register file is a collection of register files and registers
        // used to create regular repeated structures.
        //
        // Register files are usually instantiated as arrays.
        //
        virtual class uvm_reg_file extends uvm_object;
        
           local uvm_reg_block     parent;
           local uvm_reg_file   m_rf;
%000000    local string            default_hdl_path = "RTL";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
           local uvm_object_string_pool #(uvm_queue #(string)) hdl_paths_pool;
        
        
           //----------------------
           // Group: Initialization
           //----------------------
        
           //
           // Function: new
           //
           // Create a new instance
           //
           // Creates an instance of a register file abstraction class
           // with the specified name.
           //
           extern function                  new        (string name="");
        
           //
           // Function: configure
           // Configure a register file instance
           //
           // Specify the parent block and register file of the register file
           // instance.
           // If the register file is instantiated in a block,
           // ~regfile_parent~ is specified as ~null~.
           // If the register file is instantiated in a register file,
           // ~blk_parent~ must be the block parent of that register file and
           // ~regfile_parent~ is specified as that register file.
           //
           // If the register file corresponds to a hierarchical RTL structure,
           // it's contribution to the HDL path is specified as the ~hdl_path~.
           // Otherwise, the register file does not correspond to a hierarchical RTL
           // structure (e.g. it is physically flattened) and does not contribute
           // to the hierarchical HDL path of any contained registers.
           //
           extern function void     configure  (uvm_reg_block blk_parent,
                                                uvm_reg_file regfile_parent,
                                                string hdl_path = "");
         
           //---------------------
           // Group: Introspection
           //---------------------
        
           //
           // Function: get_name
           // Get the simple name
           //
           // Return the simple object name of this register file.
           //
        
           //
           // Function: get_full_name
           // Get the hierarchical name
           //
           // Return the hierarchal name of this register file.
           // The base of the hierarchical name is the root block.
           //
           extern virtual function string        get_full_name();
        
           //
           // Function: get_parent
           // Get the parent block
           //
           extern virtual function uvm_reg_block get_parent ();
           extern virtual function uvm_reg_block get_block  ();
        
           //
           // Function: get_regfile
           // Get the parent register file
           //
           // Returns ~null~ if this register file is instantiated in a block.
           //
           extern virtual function uvm_reg_file  get_regfile     ();
        
        
           //----------------
           // Group: Backdoor
           //----------------
        
           //
           // Function:  clear_hdl_path
           // Delete HDL paths
           //
           // Remove any previously specified HDL path to the register file instance
           // for the specified design abstraction.
           //
           extern function void clear_hdl_path    (string kind = "RTL");
        
           //
           // Function:  add_hdl_path
           // Add an HDL path
           //
           // Add the specified HDL path to the register file instance for the specified
           // design abstraction. This method may be called more than once for the
           // same design abstraction if the register file is physically duplicated
           // in the design abstraction
           //
           extern function void add_hdl_path      (string path, string kind = "RTL");
        
           //
           // Function:   has_hdl_path
           // Check if a HDL path is specified
           //
           // Returns TRUE if the register file instance has a HDL path defined for the
           // specified design abstraction. If no design abstraction is specified,
           // uses the default design abstraction specified for the nearest
           // enclosing register file or block
           //
           // If no design asbtraction is specified, the default design abstraction
           // for this register file is used.
           //
           extern function bit  has_hdl_path      (string kind = "");
        
           //
           // Function:  get_hdl_path
           // Get the incremental HDL path(s)
           //
           // Returns the HDL path(s) defined for the specified design abstraction
           // in the register file instance. If no design abstraction is specified, uses
           // the default design abstraction specified for the nearest enclosing
           // register file or block.
           // Returns only the component of the HDL paths that corresponds to
           // the register file, not a full hierarchical path
           //
           // If no design asbtraction is specified, the default design abstraction
           // for this register file is used.
           //
           extern function void get_hdl_path      (ref string paths[$], input string kind = "");
        
           //
           // Function:  get_full_hdl_path
           // Get the full hierarchical HDL path(s)
           //
           // Returns the full hierarchical HDL path(s) defined for the specified
           // design abstraction in the register file instance. If no design abstraction
           // is specified, uses the default design abstraction specified for the
           // nearest enclosing register file or block.
           // There may be more than one path returned even
           // if only one path was defined for the register file instance, if any of the
           // parent components have more than one path defined for the same design
           // abstraction
           //
           // If no design asbtraction is specified, the default design abstraction
           // for each ancestor register file or block is used to get each
           // incremental path.
           //
           extern function void get_full_hdl_path (ref string paths[$],
                                                   input string kind = "",
                                                   input string separator = ".");
        
           //
           // Function:    set_default_hdl_path
           // Set the default design abstraction
           //
           // Set the default design abstraction for this register file instance.
           //
           extern function void   set_default_hdl_path (string kind);
        
           //
           // Function:  get_default_hdl_path
           // Get the default design abstraction
           //
           // Returns the default design abstraction for this register file instance.
           // If a default design abstraction has not been explicitly set for this
           // register file instance, returns the default design absraction for the
           // nearest register file or block ancestor.
           // Returns "" if no default design abstraction has been specified.
           //
           extern function string get_default_hdl_path ();
        
        
           extern virtual function void          do_print (uvm_printer printer);
           extern virtual function string        convert2string();
           extern virtual function uvm_object    clone      ();
           extern virtual function void          do_copy    (uvm_object rhs);
           extern virtual function bit           do_compare (uvm_object  rhs,
                                                             uvm_comparer comparer);
           extern virtual function void          do_pack    (uvm_packer packer);
           extern virtual function void          do_unpack  (uvm_packer packer);
        
        endclass: uvm_reg_file
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        // new
        
%000000 function uvm_reg_file::new(string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    hdl_paths_pool = new("hdl_paths");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction: new
        
        
        // configure
        
%000000 function void uvm_reg_file::configure(uvm_reg_block blk_parent, uvm_reg_file regfile_parent, string hdl_path = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    this.parent = blk_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    this.m_rf = regfile_parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    this.add_hdl_path(hdl_path);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction: configure
        
        
        // get_block
        
%000000 function uvm_reg_block uvm_reg_file::get_block();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    get_block = this.parent;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction: get_block
        
        
        // get_regfile
        
%000000 function uvm_reg_file uvm_reg_file::get_regfile();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    return m_rf;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        // clear_hdl_path
        
%000000 function void uvm_reg_file::clear_hdl_path(string kind = "RTL");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   if (kind == "ALL") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     hdl_paths_pool = new("hdl_paths");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
          end
        
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000      if (m_rf != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000         kind = m_rf.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
             else
%000000         kind = parent.get_default_hdl_path();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
          end
        
%000000   if (!hdl_paths_pool.exists(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     `uvm_warning("RegModel",{"Unknown HDL Abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
          end
        
%000000   hdl_paths_pool.delete(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        // add_hdl_path
        
%000000 function void uvm_reg_file::add_hdl_path(string path, string kind = "RTL");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000   uvm_queue #(string) paths;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000   paths = hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000   paths.push_back(path);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
        endfunction
        
        
        // has_hdl_path
        
%000000 function bit  uvm_reg_file::has_hdl_path(string kind = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000      if (m_rf != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000         kind = m_rf.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
             else
%000000         kind = parent.get_default_hdl_path();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
          end
          
%000000   return hdl_paths_pool.exists(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        // get_hdl_path
        
%000000 function void uvm_reg_file::get_hdl_path(ref string paths[$], input string kind = "");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000   uvm_queue #(string) hdl_paths;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000      if (m_rf != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000         kind = m_rf.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
             else
%000000         kind = parent.get_default_hdl_path();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
          end
        
%000000   if (!has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==0) => 1 hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==1) => 0 hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     `uvm_error("RegModel",{"Register does not have hdl path defined for abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
          end
        
%000000   hdl_paths = hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000   for (int i=0; i<hdl_paths.size();i++)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     paths.push_back(hdl_paths.get(i));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
        endfunction
        
        
        // get_full_hdl_path
        
%000000 function void uvm_reg_file::get_full_hdl_path(ref string paths[$],
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
                                                      input string kind = "",
                                                      input string separator = ".");
%000000    if (kind == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       kind = get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000    if (!has_hdl_path(kind)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==0) => 1 hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=expr comment=(has_hdl_path(kind)==1) => 0 hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       `uvm_error("RegModel",{"Register file does not have hdl path defined for abstraction '",kind,"'"})
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
           end
           
%000000    paths.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       uvm_queue #(string) hdl_paths = hdl_paths_pool.get(kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       string parent_paths[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000       if (m_rf != null)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000          m_rf.get_full_hdl_path(parent_paths, kind, separator);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       else if (parent != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000          parent.get_full_hdl_path(parent_paths, kind, separator);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000       for (int i=0; i<hdl_paths.size();i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000          string hdl_path = hdl_paths.get(i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000          if (parent_paths.size() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000             if (hdl_path != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000                paths.push_back(hdl_path);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000             continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
                 end
                 
%000000          foreach (parent_paths[j])  begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000             if (hdl_path == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000                paths.push_back(parent_paths[j]);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
                    else
%000000                paths.push_back({ parent_paths[j], separator, hdl_path });
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
                 end
              end
           end
        
        endfunction
        
        
        // get_default_hdl_path
        
%000000 function string uvm_reg_file::get_default_hdl_path();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   if (default_hdl_path == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000      if (m_rf != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000         return m_rf.get_default_hdl_path();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
             else
%000000         return parent.get_default_hdl_path();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
          end
%000000   return default_hdl_path;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        // set_default_hdl_path
        
%000000 function void uvm_reg_file::set_default_hdl_path(string kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000   if (kind == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     if (m_rf != null)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000        kind = m_rf.get_default_hdl_path();
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     else if (parent == null)
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000        kind = parent.get_default_hdl_path();
-000000  point: type=line comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000     else begin
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
              `uvm_error("RegModel",{"Register file has no parent. ",
%000000            "Must specify a valid HDL abstraction (kind)"})
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       return;
-000000  point: type=line comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
            end
          end
        
%000000   default_hdl_path = kind;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
        endfunction
        
        
        // get_parent
        
%000000 function uvm_reg_block uvm_reg_file::get_parent();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   return get_block();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        // get_full_name
        
%000000 function string uvm_reg_file::get_full_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    uvm_reg_block blk;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
%000000    get_full_name = this.get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        
           // Do not include top-level name in full name
%000000    if (m_rf != null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       return {m_rf.get_full_name(), ".", get_full_name};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
        
           // Do not include top-level name in full name
%000000    blk = this.get_block();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    if (blk == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       return get_full_name;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    if (blk.get_parent() == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000       return get_full_name;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    get_full_name = {this.parent.get_full_name(), ".", get_full_name};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction: get_full_name
        
        
        //-------------
        // STANDARD OPS
        //-------------
        
        // convert2string
        
%000000 function string uvm_reg_file::convert2string();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel register files cannot be converted to strings")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000    return "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction: convert2string
        
        
        // do_print
        
%000000 function void uvm_reg_file::do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   super.do_print(printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        
        // clone
        
%000000 function uvm_object uvm_reg_file::clone();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel register files cannot be cloned")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   return null;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        // do_copy
        
%000000 function void uvm_reg_file::do_copy(uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   `uvm_fatal("RegModel","RegModel register files cannot be copied")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        // do_compare
        
%000000 function bit uvm_reg_file::do_compare (uvm_object  rhs,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
                                                uvm_comparer comparer);
%000000   `uvm_warning("RegModel","RegModel register files cannot be compared")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        // do_pack
        
%000000 function void uvm_reg_file::do_pack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   `uvm_warning("RegModel","RegModel register files cannot be packed")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        // do_unpack
        
%000000 function void uvm_reg_file::do_unpack (uvm_packer packer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
%000000   `uvm_warning("RegModel","RegModel register files cannot be unpacked")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_reg_file__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_reg_file__Vclpkg
        endfunction
        
        
        
