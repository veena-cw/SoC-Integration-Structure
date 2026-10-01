interface ReqAckIO #(
    parameter DATA_WIDTH = 18

)();
    logic [DATA_WIDTH-1:0] data;
    logic valid;

    // master mode :
  modport master (output data, valid);

    // slave mode :
  modport slave (input data, valid);

endinterface

