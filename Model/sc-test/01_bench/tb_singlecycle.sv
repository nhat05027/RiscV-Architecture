module tb_singlecycle();
    reg i_clk;
    reg i_reset;
    reg [31:0] i_io_sw;
    wire [31:0] o_pc_debug;
    wire o_insn_vld;
    wire [31:0] o_io_ledr;
    wire [31:0] o_io_ledg;
    wire [6:0] o_io_hex0, o_io_hex1, o_io_hex2, o_io_hex3;
    wire [6:0] o_io_hex4, o_io_hex5, o_io_hex6, o_io_hex7;
    wire [31:0] o_io_lcd;

    // Instantiate the single-cycle processor
    singlecycle dut (
        .i_clk(i_clk),
        .i_reset(i_reset),
        .o_pc_debug(o_pc_debug),
        .o_insn_vld(o_insn_vld),
        .o_io_ledr(o_io_ledr),
        .o_io_ledg(o_io_ledg),
        .o_io_hex0(o_io_hex0),
        .o_io_hex1(o_io_hex1),
        .o_io_hex2(o_io_hex2),
        .o_io_hex3(o_io_hex3),
        .o_io_hex4(o_io_hex4),
        .o_io_hex5(o_io_hex5),
        .o_io_hex6(o_io_hex6),
        .o_io_hex7(o_io_hex7),
        .o_io_lcd(o_io_lcd),
        .i_io_sw(i_io_sw)
    );

    // Clock generation (100 MHz)
    initial tsk_clock_gen(i_clk);
    initial tsk_reset(i_reset, 55);
    initial tsk_timeout(1000);

    // Test procedure
    initial begin
        // Initialize signals
        
        // Test Case 1: Verify reset state
        $display("Test Case 1: Reset State");
        $display("PC (After Reset): %h", o_pc_debug);
        $display("---------------------------------");

        // // Test Case 2: Execute instructions from isa.mem (e.g., add and store)
        // #100; // Allow time for instruction execution
        // $display("Test Case 2: Post-Execution State");
        // $display("PC: %h", o_pc_debug);
        // $display("LEDR (Expected: 0xDEADBEEF): %h", o_io_ledr); // Example expected value
        // $display("---------------------------------");

        // // Test Case 3: Test I/O switches (simulate input)
        // i_io_sw = 32'h12345678;
        // #40;
        // $display("Test Case 3: Switch Input");
        // $display("Read Switches (Expected: 0x12345678): %h", o_ld_data); // Assuming a load instruction
        // $display("---------------------------------");

        // // Add more test cases as needed...

    end

    // Monitor critical signals
    always @(posedge i_clk) begin
        $display("i_pc_sel = %h, i_imm_sel = %h, i_rd_wren = %h", dut.DP.i_pc_sel, dut.DP.i_imm_sel, dut.DP.i_rd_wren);

        $display("i_br_un = %h, o_br_less = %h, o_br_equal = %h ", dut.DP.i_br_un, dut.DP.o_br_less, dut.DP.o_br_equal);
        
        $display("i_opa_sel = %h, i_opb_sel = %h, i_alu_op = %h", dut.DP.i_opa_sel, dut.DP.i_opb_sel, dut.DP.i_alu_op);

        $display("i_mem_wren = %h, i_wb_sel = %h, i_lsu_op = %h", dut.DP.i_mem_wren, dut.DP.i_wb_sel, dut.DP.i_lsu_op);

        $display("alu = %h", dut.DP.alu_data);
        $display("opa = %h", dut.DP.operand_a);
        $display("opb = %h", dut.DP.operand_b);

        $display("ledr = %h", o_io_ledr);
        $display("Time: %0t | PC: %h | Instr: %h", $time, dut.DP.pc, dut.DP.instr);
        $display("ledr = %h", o_pc_debug);
        if (o_pc_debug == 32'h14) $write("%s", o_io_ledr[7:0]);
    end

endmodule