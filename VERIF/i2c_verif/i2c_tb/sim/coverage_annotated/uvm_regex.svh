//      // verilator_coverage annotation
        //----------------------------------------------------------------------
        //   Copyright 2010-2011 Mentor Graphics Corporation
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
        //   the License for the specific language governing
        //   permissions and limitations under the License.
        //----------------------------------------------------------------------
        
        
        
        `ifndef UVM_REGEX_NO_DPI
        import "DPI-C" function int uvm_re_match(string re, string str);
        import "DPI-C" function void uvm_dump_re_cache();
        import "DPI-C" function string uvm_glob_to_re(string glob);
        
        `else
        
        // The Verilog only version does not match regular expressions,
        // it only does glob style matching.
%000007 function int uvm_re_match(string re, string str);
-000007  point: type=line comment=block hier=uvm_pkg
%000007   int e, es, s, ss;
-000007  point: type=line comment=block hier=uvm_pkg
%000007   string tmp;
-000007  point: type=line comment=block hier=uvm_pkg
%000007   e  = 0; s  = 0;
-000007  point: type=line comment=block hier=uvm_pkg
%000007   es = 0; ss = 0;
-000007  point: type=line comment=block hier=uvm_pkg
        
%000007   if(re.len() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg
-000007  point: type=branch comment=else hier=uvm_pkg
%000000     return 0;
-000000  point: type=branch comment=if hier=uvm_pkg
        
          // The ^ used to be used to remove the implicit wildcard, but now we don't
          // use implicit wildcard so this character is just stripped.
%000007   if(re[0] == "^")
-000000  point: type=branch comment=if hier=uvm_pkg
-000007  point: type=branch comment=else hier=uvm_pkg
%000000     re = re.substr(1, re.len()-1);
-000000  point: type=branch comment=if hier=uvm_pkg
        
          //This loop is only needed when the first character of the re may not
          //be a *. 
%000000   while (s != str.len() && re.getc(e) != "*") begin
-000000  point: type=expr comment=(((re.getc(e)) != 8'h2a)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((s != (str))==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((s != (str))==1 && ((re.getc(e)) != 8'h2a)==1) => 1 hier=uvm_pkg
-000000  point: type=line comment=block hier=uvm_pkg
%000000     if ((re.getc(e) != str.getc(s)) && (re.getc(e) != "?"))
-000000  point: type=expr comment=(((re.getc(e)) != (str.getc(s)))==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=(((re.getc(e)) != (str.getc(s)))==1 && ((re.getc(e)) != 8'h3f)==1) => 1 hier=uvm_pkg
-000000  point: type=expr comment=(((re.getc(e)) != 8'h3f)==0) => 0 hier=uvm_pkg
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000       return 1;
-000000  point: type=branch comment=if hier=uvm_pkg
%000000     e++; s++;
-000000  point: type=line comment=block hier=uvm_pkg
          end
        
%000000   while (s != str.len()) begin
-000000  point: type=line comment=block hier=uvm_pkg
%000000     if (re.getc(e) == "*") begin
-000000  point: type=line comment=elsif hier=uvm_pkg
%000000       e++;
-000000  point: type=line comment=elsif hier=uvm_pkg
%000000       if (e == re.len()) begin
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000         return 0;
-000000  point: type=branch comment=if hier=uvm_pkg
              end
%000000       es = e;
-000000  point: type=line comment=elsif hier=uvm_pkg
%000000       ss = s+1;
-000000  point: type=line comment=elsif hier=uvm_pkg
            end
%000000     else if (re.getc(e) == str.getc(s) || re.getc(e) == "?") begin
-000000  point: type=line comment=if hier=uvm_pkg
-000000  point: type=line comment=else hier=uvm_pkg
-000000  point: type=expr comment=(((re.getc(e)) == (str.getc(s)))==0 && ((re.getc(e)) == 8'h3f)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=(((re.getc(e)) == (str.getc(s)))==1) => 1 hier=uvm_pkg
-000000  point: type=expr comment=(((re.getc(e)) == 8'h3f)==1) => 1 hier=uvm_pkg
%000000       e++;
-000000  point: type=line comment=if hier=uvm_pkg
%000000       s++;
-000000  point: type=line comment=if hier=uvm_pkg
            end
%000000     else begin
-000000  point: type=line comment=else hier=uvm_pkg
%000000       e = es;
-000000  point: type=line comment=else hier=uvm_pkg
%000000       s = ss++;
-000000  point: type=line comment=else hier=uvm_pkg
            end
          end
%000000   while (e < re.len() && re.getc(e) == "*")
-000000  point: type=expr comment=(((re.getc(e)) == 8'h2a)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((e < (re))==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((e < (re))==1 && ((re.getc(e)) == 8'h2a)==1) => 1 hier=uvm_pkg
-000000  point: type=line comment=block hier=uvm_pkg
%000000     e++;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   if(e == re.len()) begin
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     return 0;
-000000  point: type=branch comment=if hier=uvm_pkg
          end
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     return 1;
-000000  point: type=branch comment=else hier=uvm_pkg
          end
        endfunction
        
%000000 function void uvm_dump_re_cache();
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
 000017 function string uvm_glob_to_re(string glob);
+000017  point: type=line comment=block hier=uvm_pkg
 000017   return glob;
+000017  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        `endif
        
