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
