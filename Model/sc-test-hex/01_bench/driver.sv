module driver (
  output logic [31:0] i_io_sw,
  input logic i_clk,
  input logic i_reset
);

  initial begin
    i_io_sw = 32'h00ABC0DD;
  end

endmodule : driver
