module hextest(
  input  logic [31:0]  o_pc_debug,
  input  logic [31:0]  o_io_ledr,
  input  logic [31:0]  o_io_ledg,
  input  logic [ 6:0]  o_io_hex0,
  input  logic [ 6:0]  o_io_hex1,
  input  logic [ 6:0]  o_io_hex2,
  input  logic [ 6:0]  o_io_hex3,
  input  logic [ 6:0]  o_io_hex4,
  input  logic [ 6:0]  o_io_hex5,
  input  logic [ 6:0]  o_io_hex6,
  input  logic [ 6:0]  o_io_hex7,
  input  logic [31:0]  o_io_lcd ,
  input   logic [31:0]  i_io_sw  ,
  input logic i_clk,
  input logic i_reset
);

  initial begin
    $display("\nSINGLE CYCLE - HEX PROGRAM TEST\n");
  end

  always @(negedge i_clk) begin
    if (o_pc_debug == 32'h1c8) begin
      $display("Time: %0t | PC: %h | Instr: %h", $time, dut.DP.pc, dut.DP.instr);

      $write("INPUT HEX SW: %h -> %d\n", i_io_sw, i_io_sw);
      $write("HEX 7: %h \n", {1'b1, o_io_hex7});
      $write("HEX 6: %h \n", {1'b1, o_io_hex6});
      $write("HEX 5: %h \n", {1'b1, o_io_hex5});
      $write("HEX 4: %h \n", {1'b1, o_io_hex4});
      $write("HEX 3: %h \n", {1'b1, o_io_hex3});
      $write("HEX 2: %h \n", {1'b1, o_io_hex2});
      $write("HEX 1: %h \n", {1'b1, o_io_hex1});
      $write("HEX 0: %h \n", {1'b1, o_io_hex0});

      $display("\nEND of HEX PROGRAM test\n");
      $finish;
    end
  end

endmodule : hextest
