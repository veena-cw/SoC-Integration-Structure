//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2011 Cadence Design Systems, Inc. 
        //   Copyright 2010 Synopsys, Inc.
        //   All Rights Reserved Worldwide
        //
        //   Licensed under the Apache License, Version 2.0 (the
        //   "License"); you may not use this file except in
        //   compliance with the License.  You may obtain a copy of
        //   the License at
        //
        //       http://www.apache.org/licenses/LICENSE-2.0
        //
        //   Unless required by applicable law or agreed to in
        //   writing, software distributed under the License is
        //   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
        //   CONDITIONS OF ANY KIND, either express or implied.  See
        //   the License or the specific language governing
        //   permissions and limitations under the License.
        //------------------------------------------------------------------------------
        
        
        typedef class uvm_printer_knobs;
        
        parameter UVM_STDOUT = 1;  // Writes to standard out and logfile
        
        typedef struct {
          int    level;
          string name;
          string type_name;
          string size;
          string val;
        } uvm_printer_row_info;
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_printer
        //
        // The uvm_printer class provides an interface for printing <uvm_objects> in
        // various formats. Subtypes of uvm_printer implement different print formats,
        // or policies.
        //
        // A user-defined printer format can be created, or one of the following four
        // built-in printers can be used:
        //
        // - <uvm_printer> - provides base printer functionality; must be overridden.
        //
        // - <uvm_table_printer> - prints the object in a tabular form. 
        //
        // - <uvm_tree_printer> - prints the object in a tree form. 
        //
        // - <uvm_line_printer> - prints the information on a single line, but uses the
        //   same object separators as the tree printer.
        //
        // Printers have knobs that you use to control what and how information is printed.
        // These knobs are contained in a separate knob class:
        //
        // - <uvm_printer_knobs> - common printer settings
        //
        // For convenience, global instances of each printer type are available for
        // direct reference in your testbenches.
        //
        //  -  <uvm_default_tree_printer>
        //  -  <uvm_default_line_printer>
        //  -  <uvm_default_table_printer>
        //  -  <uvm_default_printer> (set to default_table_printer by default)
        //
        // When <uvm_object::print> and <uvm_object::sprint> are called without 
        // specifying a printer, the <uvm_default_printer> is used.
        //
        //------------------------------------------------------------------------------
        
%000004 virtual class uvm_printer;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
          // Variable: knobs
          //
          // The knob object provides access to the variety of knobs associated with a
          // specific printer instance. 
          //
%000004   uvm_printer_knobs knobs = new;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
        
          // Group: Methods for printer usage
        
          // These functions are called from <uvm_object::print>, or they are called
          // directly on any data to get formatted printing.
        
          // Function: print_int
          //
          // Prints an integral field.
          //
          // name  - The name of the field. 
          // value - The value of the field.
          // size  - The number of bits of the field (maximum is 4096). 
          // radix - The radix to use for printing. The printer knob for radix is used
          //           if no radix is specified. 
          // scope_separator - is used to find the leaf name since many printers only
          //           print the leaf name of a field.  Typical values for the separator
          //           are . (dot) or [ (open bracket).
        
          extern virtual function void print_int (string          name, 
                                                  uvm_bitstream_t value, 
                                                  int             size, 
                                                  uvm_radix_enum  radix=UVM_NORADIX,
                                                  byte            scope_separator=".",
                                                  string          type_name="");
        
          // backward compatibility
%000000   virtual function void print_field (string          name, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
                                             uvm_bitstream_t value, 
                                             int             size, 
                                             uvm_radix_enum  radix=UVM_NORADIX,
                                             byte            scope_separator=".",
                                             string          type_name="");
%000000     print_int (name, value, size, radix, scope_separator, type_name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
          endfunction
        
        
          // Function: print_object
          //
          // Prints an object. Whether the object is recursed depends on a variety of
          // knobs, such as the depth knob; if the current depth is at or below the
          // depth setting, then the object is not recursed. 
          //
          // By default, the children of <uvm_components> are printed. To turn this
          // behavior off, you must set the <uvm_component::print_enabled> bit to 0 for
          // the specific children you do not want automatically printed.
        
          extern virtual function void print_object (string     name,
                                                     uvm_object value, 
                                                     byte       scope_separator=".");
        
        
          extern virtual function void print_object_header (string name,
                                                            uvm_object value,
                                                            byte scope_separator=".");
        
        
          // Function: print_string
          //
          // Prints a string field.
        
          extern virtual function void print_string (string name,
                                                     string value, 
                                                     byte   scope_separator=".");
        
        
          // Function: print_time
          //
          // Prints a time value. name is the name of the field, and value is the
          // value to print. 
          //
          // The print is subject to the ~$timeformat~ system task for formatting time
          // values.
        
          extern virtual function void print_time (string name,
                                                   time   value, 
                                                   byte   scope_separator=".");
        
        
          // Function: print_string
          //
          // Prints a string field.
        
          extern virtual function void print_real (string  name, 
                                                   real    value,
                                                   byte    scope_separator=".");
        
          // Function: print_generic
          //
          // Prints a field having the given ~name~, ~type_name~, ~size~, and ~value~.
        
          extern virtual function void print_generic (string  name, 
                                                      string  type_name, 
                                                      int     size, 
                                                      string  value,
                                                      byte    scope_separator=".");
        
          // Group: Methods for printer subtyping
        
          // Function: emit
          //
          // Emits a string representing the contents of an object
          // in a format defined by an extension of this object.
          //
          extern virtual function string emit (); 
        
        
          // Function: format_row
          //
          // Hook for producing custom output of a single field (row).
          //
          extern virtual function string format_row (uvm_printer_row_info row);
        
        
          // Function: format_row
          //
          // Hook to override base header with a custom header. 
%000000   virtual function string format_header();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000     return "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
          endfunction
        
        
          // Function: format_header
          //
          // Hook to override base footer with a custom footer. 
%000000   virtual function string format_footer();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000     return "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
          endfunction
        
        
          // Function: adjust_name
          //
          // Prints a field's name, or ~id~, which is the full instance name.
          //
          // The intent of the separator is to mark where the leaf name starts if the
          // printer if configured to print only the leaf name of the identifier. 
        
          extern virtual protected function string adjust_name (string id, 
                                                           byte scope_separator=".");
        
          // Function: print_array_header
          //
          // Prints the header of an array. This function is called before each
          // individual element is printed. <print_array_footer> is called to mark the
          // completion of array printing.
        
          extern virtual  function void print_array_header(string name,
                                                           int    size,     
                                                           string arraytype="array",
                                                           byte   scope_separator=".");
        
          // Function: print_array_range
          //
          // Prints a range using ellipses for values. This method is used when honoring
          // the array knobs for partial printing of large arrays, 
          // <uvm_printer_knobs::begin_elements> and <uvm_printer_knobs::end_elements>. 
          //
          // This function should be called after begin_elements have been printed
          // and before end_elements have been printed.
        
          extern virtual function void print_array_range (int min, int max);
        
        
          // Function: print_array_footer
          //
          // Prints the header of a footer. This function marks the end of an array
          // print. Generally, there is no output associated with the array footer, but
          // this method lets the printer know that the array printing is complete.
        
          extern virtual  function void print_array_footer (int size=0);
        
        
        
          // Utility methods
          extern  function bit istop ();
          extern  function string index_string (int index, string name="");
        
          protected bit m_array_stack[$];
%000004   uvm_scope_stack m_scope = new;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
          string m_string;
        
          // holds each cell entry
          protected uvm_printer_row_info m_rows[$];
        
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_table_printer
        //
        // The table printer prints output in a tabular format.
        //
        // The following shows sample output from the table printer.
        //
        //|  ---------------------------------------------------
        //|  Name        Type            Size        Value
        //|  ---------------------------------------------------
        //|  c1          container       -           @1013
        //|  d1          mydata          -           @1022
        //|  v1          integral        32          'hcb8f1c97
        //|  e1          enum            32          THREE
        //|  str         string          2           hi
        //|  value       integral        12          'h2d
        //|  ---------------------------------------------------
        //
        //------------------------------------------------------------------------------
        
        class uvm_table_printer extends uvm_printer;
        
          // Variable: new
          //
          // Creates a new instance of ~uvm_table_printer~.
          //
          extern function new(); 
        
          // Function: emit
          //
          // Formats the collected information from prior calls to ~print_*~
          // into table format.
          //
          extern virtual function string emit();
        
          // Variables- m_max_*
          //
          // holds max size of each column, so table columns can be resized dynamically
        
          protected int m_max_name;
          protected int m_max_type;
          protected int m_max_size;
          protected int m_max_value;
        
          extern function void calculate_max_widths();
        
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_tree_printer
        //
        // By overriding various methods of the <uvm_printer> super class,
        // the tree printer prints output in a tree format.
        //
        // The following shows sample output from the tree printer.
        //
        //|  c1: (container@1013) {
        //|    d1: (mydata@1022) {
        //|         v1: 'hcb8f1c97
        //|         e1: THREE
        //|         str: hi
        //|    }  
        //|    value: 'h2d
        //|  }
        //
        //------------------------------------------------------------------------------
        
        class uvm_tree_printer extends uvm_printer;
        
%000003   string newline = "\n";
-000003  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
        
          // Variable: new
          //
          // Creates a new instance of ~uvm_tree_printer~.
        
          extern function new();
        
          // Function: emit
          //
          // Formats the collected information from prior calls to ~print_*~
          // into hierarchical tree format.
          //
          extern virtual function string emit();
        
        endclass
        
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_line_printer
        //
        // The line printer prints output in a line format.
        //
        // The following shows sample output from the line printer.
        //
        //| c1: (container@1013) { d1: (mydata@1022) { v1: 'hcb8f1c97 e1: THREE str: hi } value: 'h2d } 
        //------------------------------------------------------------------------------
        
        class uvm_line_printer extends uvm_tree_printer;
        
          // Variable: new
          //
          // Creates a new instance of ~uvm_line_printer~. It differs from the
          // <uvm_tree_printer> only in that the output contains no line-feeds
          // and indentation.
        
%000002   function new(); 
-000002  point: type=line comment=block hier=uvm_pkg::uvm_line_printer__Vclpkg
%000002     newline = " ";
-000002  point: type=line comment=block hier=uvm_pkg::uvm_line_printer__Vclpkg
%000002     knobs.indent = 0;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_line_printer__Vclpkg
          endfunction
        
        endclass
        
        
        
        //------------------------------------------------------------------------------
        //
        // Class: uvm_printer_knobs
        //
        // The ~uvm_printer_knobs~ class defines the printer settings available to all
        // printer subtypes. 
        //
        //------------------------------------------------------------------------------
        
%000004 class uvm_printer_knobs;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
          // Variable: header
          //
          // Indicates whether the <print_header> function should be called when
          // printing an object.
        
%000004   bit header = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: footer
          //
          // Indicates whether the <print_footer> function should be called when
          // printing an object. 
        
%000004   bit footer = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: full_name
          //
          // Indicates whether <adjust_name> should print the full name of an identifier
          // or just the leaf name.
        
%000004   bit full_name = 0;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: identifier
          //
          // Indicates whether <adjust_name> should print the identifier. This is useful
          // in cases where you just want the values of an object, but no identifiers.
        
%000004   bit identifier = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: type_name
          //
          // Controls whether to print a field's type name. 
        
%000004   bit type_name = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: size
          //
          // Controls whether to print a field's size. 
        
%000004   bit size = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: depth
          //
          // Indicates how deep to recurse when printing objects. 
          // A depth of -1 means to print everything.
        
%000004   int depth = -1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
          
        
          // Variable: reference
          //
          // Controls whether to print a unique reference ID for object handles.
          // The behavior of this knob is simulator-dependent.
        
%000004   bit reference = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: begin_elements
          //
          // Defines the number of elements at the head of a list to print.
          // Use -1 for no max.
        
%000004   int begin_elements = 5;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: end_elements
          //
          // This defines the number of elements at the end of a list that
          // should be printed.
          
%000004   int end_elements = 5;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: prefix
          //
          // Specifies the string prepended to each output line
          
%000004   string prefix = ""; 
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: indent
          //
          // This knob specifies the number of spaces to use for level indentation. 
          // The default level indentation is two spaces.
        
%000004   int indent = 2;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: show_root
          //
          // This setting indicates whether or not the initial object that is printed
          // (when current depth is 0) prints the full path name. By default, the first
          // object is treated like all other objects and only the leaf name is printed.
        
%000004   bit show_root = 0;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: mcd
          //
          // This is a file descriptor, or multi-channel descriptor, that specifies
          // where the print output should be directed. 
          //
          // By default, the output goes to the standard output of the simulator.
        
%000004   int mcd = UVM_STDOUT; 
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: separator
          //
          // For tree printers only, determines the opening and closing
          // separators used for nested objects.
        
%000004   string separator = "{}";
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: show_radix
          //
          // Indicates whether the radix string ('h, and so on) should be prepended to
          // an integral value when one is printed.
        
%000004   bit show_radix = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: default_radix
          //
          // This knob sets the default radix to use for integral values when no radix
          // enum is explicitly supplied to the print_int() method.
        
%000004   uvm_radix_enum default_radix = UVM_HEX;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
          
          // Variable: dec_radix
          //
          // This string should be prepended to the value of an integral type when a
          // radix of <UVM_DEC> is used for the radix of the integral object. 
          //
          // When a negative number is printed, the radix is not printed since only
          // signed decimal values can print as negative.
        
%000004   string dec_radix = "'d";
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: bin_radix
          //
          // This string should be prepended to the value of an integral type when a
          // radix of <UVM_BIN> is used for the radix of the integral object.
        
%000004   string bin_radix = "'b";
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: oct_radix
          //
          // This string should be prepended to the value of an integral type when a
          // radix of <UVM_OCT> is used for the radix of the integral object.
        
%000004   string oct_radix = "'o";
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: unsigned_radix
          //
          // This is the string which should be prepended to the value of an integral
          // type when a radix of <UVM_UNSIGNED> is used for the radix of the integral
          // object. 
        
%000004   string unsigned_radix = "'d";
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Variable: hex_radix
          //
          // This string should be prepended to the value of an integral type when a
          // radix of <UVM_HEX> is used for the radix of the integral object.
        
%000004   string hex_radix = "'h";
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        
          // Function: get_radix_str
          //
          // Converts the radix from an enumerated to a printable radix according to
          // the radix printing knobs (bin_radix, and so on).
        
%000000   function string get_radix_str(uvm_radix_enum radix);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000     if(show_radix == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer_knobs__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000       return "";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000     if(radix == UVM_NORADIX)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer_knobs__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000       radix = default_radix;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000     case(radix)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000       UVM_BIN: return bin_radix;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000       UVM_OCT: return oct_radix;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000       UVM_DEC: return dec_radix;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000       UVM_HEX: return hex_radix;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000       UVM_UNSIGNED: return unsigned_radix;
-000000  point: type=line comment=case hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000000       default: return "";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_printer_knobs__Vclpkg
            endcase
          endfunction
        
          // Deprecated knobs, hereafter ignored
%000004   int max_width = 999;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000004   string truncation = "+"; 
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000004   int name_width = -1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000004   int type_width = -1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000004   int size_width = -1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000004   int value_width = -1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
%000004   bit sprint = 1;
-000004  point: type=line comment=block hier=uvm_pkg::uvm_printer_knobs__Vclpkg
        
        endclass
        
        
        typedef uvm_printer_knobs uvm_table_printer_knobs;
        typedef uvm_printer_knobs uvm_tree_printer_knobs;
        
        
        //------------------------------------------------------------------------------
        // IMPLEMENTATION
        //------------------------------------------------------------------------------
        
        // emit
        // ----
        
%000000 function string uvm_printer::emit (); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   `uvm_error("NO_OVERRIDE","emit() method not overridden in printer subtype")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000   return "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        endfunction
        
        
        // format_row
        // ----------
        
%000000 function string uvm_printer::format_row (uvm_printer_row_info row);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   return "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        endfunction
        
        
        // print_array_header
        // ------------------
        
%000000 function void uvm_printer::print_array_header (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
                                                       int size,
                                                       string arraytype="array",
                                                       byte scope_separator=".");
%000000   uvm_printer_row_info row_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if(name != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     m_scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   row_info.level = m_scope.depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.name = adjust_name(m_scope.get(),scope_separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.type_name = arraytype;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.size = $sformatf("%0d",size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.val = "-";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   m_rows.push_back(row_info);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   m_scope.down(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   m_array_stack.push_back(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        endfunction
        
        
        // print_array_footer
        // ------------------
        
%000000 function void  uvm_printer::print_array_footer (int size=0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   if(m_array_stack.size()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     m_scope.up();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000     void'(m_array_stack.pop_front());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
          end
        endfunction
        
        
        // print_array_range
        // -----------------
        
%000000 function void uvm_printer::print_array_range(int min, int max);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   string tmpstr;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   if(min == -1 && max == -1)
-000000  point: type=expr comment=((max == (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((min == (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((min == (- 32'sh1))==1 && (max == (- 32'sh1))==1) => 1 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000   if(min == -1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000      min = max;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000   if(max == -1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000      max = min;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000   if(max < min)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000   print_generic("...", "...", -2, "...");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        endfunction
        
        
        // print_object_header
        // -------------------
        
%000000 function void uvm_printer::print_object_header (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
                                                        uvm_object value,
                                                        byte scope_separator=".");
%000000   uvm_printer_row_info row_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   uvm_component comp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if(name == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     if(value!=null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000       if((m_scope.depth()==0) && $cast(comp, value)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000         name = comp.get_full_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000         name=value.get_name();
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
              end
            end
          end
                
%000000   if(name == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     name = "<unnamed>";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   m_scope.set_arg(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   row_info.level = m_scope.depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if(row_info.level == 0 && knobs.show_root==1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000 	row_info.name = value.get_full_name();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
          else
%000000 	row_info.name = adjust_name(m_scope.get(),scope_separator);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   row_info.type_name = (value != null) ?  value.get_type_name() : "object";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.size = "-";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.val = knobs.reference ? uvm_object_value_str(value) : "-";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   m_rows.push_back(row_info);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
        endfunction
        
        
        // print_object
        // ------------
        
%000000 function void uvm_printer::print_object (string name, uvm_object value,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000                                          byte scope_separator=".");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000   uvm_component comp, child_comp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   print_object_header(name,value,scope_separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if(value != null)  begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     if((knobs.depth == -1 || (knobs.depth > m_scope.depth())) &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000           !value.__m_uvm_status_container.cycle_check.exists(value)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000       value.__m_uvm_status_container.cycle_check[value] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000       if(name=="" && value!=null) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000         m_scope.down(value.get_name());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
              else
%000000         m_scope.down(name);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
        
              //Handle children of the comp
%000000       if($cast(comp, value)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000         string name;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000         if (comp.get_first_child(name))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000           do begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000             child_comp = comp.get_child(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000             if(child_comp.print_enabled)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000               this.print_object("",child_comp);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000           end while (comp.get_next_child(name));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
              end
        
              // print members of object
%000000       void'(value.sprint(this));
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000       if(name != "" && name[0] == "[")
-000000  point: type=expr comment=(((name.getc(32'sh0)) == 8'h5b)==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((name != %22%22)==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((name != %22%22)==1 && ((name.getc(32'sh0)) == 8'h5b)==1) => 1 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000         m_scope.up("[");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
              else
%000000         m_scope.up(".");
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000       value.__m_uvm_status_container.cycle_check.delete(value);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
            end
          end
        
        endfunction
        
        
        // istop
        // -----
        
%000000 function bit uvm_printer::istop ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   return (m_scope.depth() == 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        endfunction
        
        
        // adjust_name
        // -----------
        
%000000 function string uvm_printer::adjust_name(string id, byte scope_separator=".");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   if (knobs.show_root && m_scope.depth()==0 || knobs.full_name || id == "...")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     return id;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000   return uvm_leaf_scope(id, scope_separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        endfunction
        
        
        // print_generic
        // -------------
        
%000000 function void uvm_printer::print_generic (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
                                                  string type_name,        
                                                  int size,
                                                  string value,
%000000                                           byte scope_separator=".");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   uvm_printer_row_info row_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if (name != "" && name != "...") begin
-000000  point: type=expr comment=((name != %22%22)==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((name != %22%22)==1 && (name != %22...%22)==1) => 1 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((name != %22...%22)==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     m_scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000     name = m_scope.get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
          end
        
%000000   row_info.level = m_scope.depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.name = adjust_name(name,scope_separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.type_name = type_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.size = (size == -2 ? "..." : $sformatf("%0d",size));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((size == (- 32'sh2))==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((size == (- 32'sh2))==1) => 1 hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.val = (value == "" ? "\"\"" : value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((value == %22%22)==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((value == %22%22)==1) => 1 hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   m_rows.push_back(row_info);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
        endfunction
        
        
        // print_int
        // ---------
        
%000000 function void uvm_printer::print_int (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
                                              uvm_bitstream_t value, 
                                              int size, 
                                              uvm_radix_enum radix=UVM_NORADIX,
                                              byte scope_separator=".",
%000000                                       string type_name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
          
%000000   uvm_printer_row_info row_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   string sz_str, val_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if(name != "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     m_scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000     name = m_scope.get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
          end
        
%000000   if(type_name == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     if(radix == UVM_TIME)
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_printer__Vclpkg
%000000       type_name ="time";
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_printer__Vclpkg
%000000     else if(radix == UVM_STRING)
-000000  point: type=line comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=line comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000       type_name ="string";
-000000  point: type=line comment=if hier=uvm_pkg::uvm_printer__Vclpkg
            else
%000000       type_name ="integral";
-000000  point: type=line comment=else hier=uvm_pkg::uvm_printer__Vclpkg
          end
        
%000000   sz_str.itoa(size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if(radix == UVM_NORADIX)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     radix = knobs.default_radix;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   val_str = uvm_vector_to_string (value, size, radix,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000                                   knobs.get_radix_str(radix));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   row_info.level = m_scope.depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.name = adjust_name(name,scope_separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.type_name = type_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.size = sz_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.val = val_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   m_rows.push_back(row_info);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
        endfunction
          
        
        // print_time
        // ----------
        
%000000 function void uvm_printer::print_time (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
                                               time value,
                                               byte scope_separator=".");
%000000   print_int(name, value, 64, UVM_TIME, scope_separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        endfunction
        
        
        // print_string
        // ------------
        
%000000 function void uvm_printer::print_string (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
                                                 string value,
                                                 byte scope_separator=".");
        
%000000   uvm_printer_row_info row_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if(name != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     m_scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   row_info.level = m_scope.depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.name = adjust_name(m_scope.get(),scope_separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.type_name = "string";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.size = $sformatf("%0d",value.len());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.val = (value == "" ? "\"\"" : value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((value == %22%22)==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((value == %22%22)==1) => 1 hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   m_rows.push_back(row_info);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
        endfunction
        
        
        // print_real
        // ----------
        
%000000 function void uvm_printer::print_real (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
                                               real value,
                                               byte scope_separator=".");
        
%000000   uvm_printer_row_info row_info;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   if (name != "" && name != "...") begin
-000000  point: type=expr comment=((name != %22%22)==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((name != %22%22)==1 && (name != %22...%22)==1) => 1 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=expr comment=((name != %22...%22)==0) => 0 hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_printer__Vclpkg
%000000     m_scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
%000000     name = m_scope.get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_printer__Vclpkg
          end
        
%000000   row_info.level = m_scope.depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.name = adjust_name(m_scope.get(),scope_separator);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.type_name = "real";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.size = "64";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   row_info.val = $sformatf("%f",value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
%000000   m_rows.push_back(row_info);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        
        endfunction
        
        
        // index_string
        // ------------
        
%000000 function string uvm_printer::index_string(int index, string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   index_string.itoa(index);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
%000000   index_string = { name, "[", index_string, "]" }; 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_printer__Vclpkg
        endfunction
        
        
        
        //------------------------------------------------------------------------------
        // Class- uvm_table_printer
        //------------------------------------------------------------------------------
        
        // new
        // ---
        
%000001 function uvm_table_printer::new(); 
-000001  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000001   super.new();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
        endfunction
        
        
        // calculate_max_widths
        // --------------------
        
%000000 function void uvm_table_printer::calculate_max_widths();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000    m_max_name=4;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000    m_max_type=4;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000    m_max_size = 4;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000    m_max_value= 5;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000    foreach(m_rows[j]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       int name_len;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       uvm_printer_row_info row = m_rows[j];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       name_len = knobs.indent*row.level + row.name.len();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       if (name_len > m_max_name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         m_max_name = name_len;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       if (row.type_name.len() > m_max_type)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         m_max_type = row.type_name.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       if (row.size.len() > m_max_size)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         m_max_size = row.size.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       if (row.val.len() > m_max_value)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         m_max_value = row.val.len();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
           end
        endfunction
        
        // emit
        // ----
        
%000000 function string uvm_table_printer::emit();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
        
%000000   string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000   string user_format;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000   static string dash; // = "---------------------------------------------------------------------------------------------------";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000   static string space; //= "                                                                                                   ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000   string dashes;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
        
%000000   string linefeed = {"\n", knobs.prefix};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
        
%000000   calculate_max_widths(); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
        
%000000    begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       int q[5];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       int m;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       int qq[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
              
%000000       q = '{m_max_name,m_max_type,m_max_size,m_max_value,100};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       qq = q.max;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       m = qq[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000   	if(dash.len()<m) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000   		dash = {m{"-"}};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000   		space = {m{" "}};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
          	end
          end
          
%000000   if (knobs.header) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000     string header;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000     user_format = format_header();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000     if (user_format == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       string dash_id, dash_typ, dash_sz;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       string head_id, head_typ, head_sz;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       if (knobs.identifier) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         dashes = {dash.substr(1,m_max_name+2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         header = {"Name",space.substr(1,m_max_name-2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
              end
%000000       if (knobs.type_name) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         dashes = {dashes, dash.substr(1,m_max_type+2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         header = {header, "Type",space.substr(1,m_max_type-2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
              end
%000000       if (knobs.size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         dashes = {dashes, dash.substr(1,m_max_size+2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         header = {header, "Size",space.substr(1,m_max_size-2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
              end
%000000       dashes = {dashes, dash.substr(1,m_max_value), linefeed};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       header = {header, "Value", space.substr(1,m_max_value-5), linefeed};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
        
%000000       s = {s, dashes, header, dashes};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
            end
%000000     else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       s = {s, user_format, linefeed};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
            end
          end
        
%000000   foreach (m_rows[i]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000     uvm_printer_row_info row = m_rows[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000     user_format = format_row(row);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000     if (user_format == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       string row_str;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       if (knobs.identifier)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         row_str = {space.substr(1,row.level * knobs.indent), row.name,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000                    space.substr(1,m_max_name-row.name.len()-(row.level*knobs.indent)+2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       if (knobs.type_name)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         row_str = {row_str, row.type_name, space.substr(1,m_max_type-row.type_name.len()+2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       if (knobs.size)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000         row_str = {row_str, row.size, space.substr(1,m_max_size-row.size.len()+2)};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       s = {s, row_str, row.val, space.substr(1,m_max_value-row.val.len()), linefeed};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
            end
            else
%000000       s = {s, user_format, linefeed};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
          end
         
%000000   if (knobs.footer) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000     user_format = format_footer();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000     if (user_format == "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000       s = {s, dashes};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_table_printer__Vclpkg
            else
%000000       s = {s, user_format, linefeed};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_table_printer__Vclpkg
          end
        
%000000   emit = s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
%000000   m_rows.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_table_printer__Vclpkg
        endfunction
        
        
        
        //------------------------------------------------------------------------------
        // Class- uvm_tree_printer
        //------------------------------------------------------------------------------
        
        
        // new
        // ---
        
%000003 function uvm_tree_printer::new();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000003   super.new();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000003   knobs.size = 0;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000003   knobs.type_name = 0;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000003   knobs.header = 0;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000003   knobs.footer = 0;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
        endfunction
        
        
        // emit
        // ----
        
%000000 function string uvm_tree_printer::emit();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
        
%000000   string s = knobs.prefix;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000   string space= "                                                                                                   ";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000   string user_format;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
        
%000000   string linefeed = newline == "" || newline == " " ? newline : {newline, knobs.prefix};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((newline == %22 %22)==1) => 1 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((newline == %22%22)==0 && (newline == %22 %22)==0) => 0 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((newline == %22%22)==1) => 1 hier=uvm_pkg::uvm_tree_printer__Vclpkg
        
          // Header
%000000   if (knobs.header) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000     user_format = format_header();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000     if (user_format != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000       s = {s, user_format, linefeed};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
          end
        
%000000   foreach (m_rows[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000     uvm_printer_row_info row = m_rows[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000     user_format = format_row(row);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000     if (user_format == "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000       string indent_str;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000       indent_str = space.substr(1,row.level * knobs.indent); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
        
              // Name (id)
%000000       if (knobs.identifier) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000         s = {s,indent_str, row.name};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000         if (row.name != "" && row.name != "...")
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((row.name != %22%22)==0) => 0 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((row.name != %22%22)==1 && (row.name != %22...%22)==1) => 1 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((row.name != %22...%22)==0) => 0 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000           s = {s, ": "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
              end
        
              // Type Name
%000000       if (row.val[0] == "@") // is an object w/ knobs.reference on
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000         s = {s,"(",row.type_name,row.val,") "};
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_tree_printer__Vclpkg
              else
%000000         if (knobs.type_name &&
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
                     (row.type_name != "" ||
                      row.type_name != "-" ||
                      row.type_name != "..."))
%000000           s = {s,"(",row.type_name,") "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
                
              // Size
%000000       if (knobs.size) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000         if (row.size != "" || row.size != "-")
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((row.size != %22%22)==0 && (row.size != %22-%22)==0) => 0 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((row.size != %22%22)==1) => 1 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((row.size != %22-%22)==1) => 1 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000             s = {s,"(",row.size,") "};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
              end
        
%000000       if (i < m_rows.size()-1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000         if (m_rows[i+1].level > row.level) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000           s = {s, string'(knobs.separator[0]), linefeed};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000           continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
                end
              end
        
              // Value (unconditional)
%000000       s = {s, row.val, " ", linefeed};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
        
              // Scope handling...
%000000       if (i <= m_rows.size()-1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000         int end_level;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000         if (i == m_rows.size()-1)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000           end_level = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
                else
%000000           end_level = m_rows[i+1].level;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000         if (end_level < row.level) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000           string indent_str;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000           for (int l=row.level-1; l >= end_level; l--) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000             indent_str = space.substr(1,l * knobs.indent); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000             s = {s, indent_str, string'(knobs.separator[1]), linefeed};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
                  end
                end
              end
        
            end
            else
%000000       s = {s, user_format};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
          end
         
          // Footer
%000000   if (knobs.footer) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000     user_format = format_footer();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000     if (user_format != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000       s = {s, user_format, linefeed};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
          end
        
%000000   if (newline == "" || newline == " ")
-000000  point: type=expr comment=((newline == %22 %22)==1) => 1 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((newline == %22%22)==0 && (newline == %22 %22)==0) => 0 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=expr comment=((newline == %22%22)==1) => 1 hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000     s = {s, "\n"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_tree_printer__Vclpkg
        
%000000   emit = s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
%000000   m_rows.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_tree_printer__Vclpkg
        endfunction
        
        
