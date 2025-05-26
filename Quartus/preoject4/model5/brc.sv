/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */
/* verilator lint_off UNOPTFLAT */
/* verilator lint_off DECLFILENAME */

module brc (
    input wire [31:0] i_rs1_data,
    input wire [31:0] i_rs2_data,
    input wire i_br_un, // 1: unsigned, 0 for signed
    output wire o_br_less,
    output wire o_br_equal
);


// Set less than A<B
wire [31:0] A_xor_B; // XOR result for each bit
wire [31:0] not_A_and_B; // (NOT A) AND B for each bit
genvar i;
generate
    for (i = 0; i < 32; i = i + 1) begin : bit_comparison
        assign A_xor_B[i] = i_rs1_data[i] ^ i_rs2_data[i]; // XOR for equality check
        assign not_A_and_B[i] = ~i_rs1_data[i] & i_rs2_data[i]; // A < B for this bit
    end
endgenerate

assign o_br_equal = &(~A_xor_B); // AND of all XOR results (0 if any bit differs)

// Less than check (A < B)
wire [31:0] lt_temp;
assign lt_temp[0] = not_A_and_B[0];
generate
    for (i = 1; i < 32; i = i + 1) begin : lt_check
        assign lt_temp[i] = not_A_and_B[i] | (lt_temp[i-1] & ~A_xor_B[i]);
    end
endgenerate

assign o_br_less = lt_temp[31] ^ (~i_br_un & (~i_rs1_data[31] & i_rs2_data[31])) ^ (~i_br_un & (i_rs1_data[31] & ~i_rs2_data[31]));


endmodule

module brc_control (
    input wire [31:0] i_rs1_data,
    input wire [31:0] i_rs2_data,
    input wire i_br_un, // 1: unsigned, 0 for signed
    input wire [2:0] i_br_type,
    output reg o_jump
);
    localparam BEQ = 3'b000;
    localparam BNE = 3'b001;
    localparam BLT = 3'b100;
    localparam BGE = 3'b101;
    localparam BLTU = 3'b110;
    localparam BGEU = 3'b111;

    wire br_less, br_equal;
    brc branchcompare(
        .i_rs1_data(i_rs1_data),
        .i_rs2_data(i_rs2_data),
        .i_br_un(i_br_un), // 1: unsigned, 0 for signed
        .o_br_less(br_less),
        .o_br_equal(br_equal)
    );

    always @(*) begin
        case (i_br_type)
            BEQ: o_jump <= br_equal;
            BNE: o_jump <= !br_equal;
            BLT: o_jump <= br_less; 
            BGE: o_jump <= !br_less; 
            BLTU: o_jump <= br_less; 
            BGEU: o_jump <= !br_less; 
            default: o_jump <= 0; 
        endcase
    end
endmodule
