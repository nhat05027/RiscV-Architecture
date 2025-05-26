module alu (
    input wire [31:0] i_op_a,
    input wire [31:0] i_op_b,
    input wire [3:0] i_alu_op,
    output reg [31:0] o_alu_data
);
    localparam ADD = 4'b0000;
    localparam SUB = 4'b1000;

    localparam SLL = 4'b0001;

    localparam SLT = 4'b0010;
    localparam SLTU = 4'b0011;

    localparam XOR = 4'b0100;

    localparam SRL = 4'b0101;
    localparam SRA = 4'b1101;

    localparam OR = 4'b0110;
    localparam AND = 4'b0111;

    localparam LUI = 4'b1111; // use and with 32'hFFFF_FFFF

    // ADD+SUB
    wire[31:0] temp_i_op_b;
    assign temp_i_op_b = i_op_b^{32{i_alu_op[3]}};

    // Shift right arithmetic
    wire sign_bit_sra;
    assign sign_bit_sra = i_op_a[31]&i_alu_op[3];

    // Set less than A<B
    wire A_lt_B;
    wire [31:0] A_xor_B; // XOR result for each bit
    wire [31:0] not_A_and_B; // (NOT A) AND B for each bit
    genvar i;
    generate
        for (i = 0; i < 32; i = i + 1) begin : bit_comparison
            assign A_xor_B[i] = i_op_a[i] ^ i_op_b[i]; // XOR for equality check
            assign not_A_and_B[i] = ~i_op_a[i] & i_op_b[i]; // A < B for this bit
        end
    endgenerate

    // assign A_eq_B = &(~A_xor_B); // AND of all XOR results (0 if any bit differs)

    // Less than check (A < B)
    wire [31:0] lt_temp;
    assign lt_temp[0] = not_A_and_B[0];
    generate
        for (i = 1; i < 32; i = i + 1) begin : lt_check
            assign lt_temp[i] = not_A_and_B[i] | (lt_temp[i-1] & ~A_xor_B[i]);
        end
    endgenerate

    assign A_lt_B = lt_temp[31];

    // OP code
    always @(*) begin
        case (i_alu_op[2:0])
            ADD[2:0]: o_alu_data <= i_op_a + temp_i_op_b + i_alu_op[3]; // ADD+SUB

            XOR[2:0]: o_alu_data <= i_op_a ^ i_op_b;
            AND[2:0]: o_alu_data <= (i_op_a | {32{i_alu_op[3]}}) & i_op_b;
            OR[2:0]: o_alu_data <= i_op_a | i_op_b;

            SLL[2:0]: begin
                case (i_op_b[4:0])
                    1: o_alu_data <= {i_op_a[30:0], 1'd0};
                    2: o_alu_data <= {i_op_a[29:0], 2'd0};
                    3: o_alu_data <= {i_op_a[28:0], 3'd0};
                    4: o_alu_data <= {i_op_a[27:0], 4'd0};
                    5: o_alu_data <= {i_op_a[26:0], 5'd0};
                    6: o_alu_data <= {i_op_a[25:0], 6'd0};
                    7: o_alu_data <= {i_op_a[24:0], 7'd0};
                    8: o_alu_data <= {i_op_a[23:0], 8'd0};
                    9: o_alu_data <= {i_op_a[22:0], 9'd0};
                    10: o_alu_data <= {i_op_a[21:0], 10'd0};
                    11: o_alu_data <= {i_op_a[20:0], 11'd0};
                    12: o_alu_data <= {i_op_a[19:0], 12'd0};
                    13: o_alu_data <= {i_op_a[18:0], 13'd0};
                    14: o_alu_data <= {i_op_a[17:0], 14'd0};
                    15: o_alu_data <= {i_op_a[16:0], 15'd0};
                    16: o_alu_data <= {i_op_a[15:0], 16'd0};
                    17: o_alu_data <= {i_op_a[14:0], 17'd0};
                    18: o_alu_data <= {i_op_a[13:0], 18'd0};
                    19: o_alu_data <= {i_op_a[12:0], 19'd0};
                    20: o_alu_data <= {i_op_a[11:0], 20'd0};
                    21: o_alu_data <= {i_op_a[10:0], 21'd0};
                    22: o_alu_data <= {i_op_a[9:0], 22'd0};
                    23: o_alu_data <= {i_op_a[8:0], 23'd0};
                    24: o_alu_data <= {i_op_a[7:0], 24'd0};
                    25: o_alu_data <= {i_op_a[6:0], 25'd0};
                    26: o_alu_data <= {i_op_a[5:0], 26'd0};
                    27: o_alu_data <= {i_op_a[4:0], 27'd0};
                    28: o_alu_data <= {i_op_a[3:0], 28'd0};
                    29: o_alu_data <= {i_op_a[2:0], 29'd0};
                    30: o_alu_data <= {i_op_a[1:0], 30'd0};
                    31: o_alu_data <= {i_op_a[0:0], 31'd0};
                    default: o_alu_data <= i_op_a[31:0];
                endcase
            end
            SRL[2:0]: begin // SRL and SRA
                case (i_op_b[4:0])
                    1: o_alu_data <= {{1{sign_bit_sra}}, i_op_a[31:1]};
                    2: o_alu_data <= {{2{sign_bit_sra}}, i_op_a[31:2]};
                    3: o_alu_data <= {{3{sign_bit_sra}}, i_op_a[31:3]};
                    4: o_alu_data <= {{4{sign_bit_sra}}, i_op_a[31:4]};
                    5: o_alu_data <= {{5{sign_bit_sra}}, i_op_a[31:5]};
                    6: o_alu_data <= {{6{sign_bit_sra}}, i_op_a[31:6]};
                    7: o_alu_data <= {{7{sign_bit_sra}}, i_op_a[31:7]};
                    8: o_alu_data <= {{8{sign_bit_sra}}, i_op_a[31:8]};
                    9: o_alu_data <= {{9{sign_bit_sra}}, i_op_a[31:9]};
                    10: o_alu_data <= {{10{sign_bit_sra}}, i_op_a[31:10]};
                    11: o_alu_data <= {{11{sign_bit_sra}}, i_op_a[31:11]};
                    12: o_alu_data <= {{12{sign_bit_sra}}, i_op_a[31:12]};
                    13: o_alu_data <= {{13{sign_bit_sra}}, i_op_a[31:13]};
                    14: o_alu_data <= {{14{sign_bit_sra}}, i_op_a[31:14]};
                    15: o_alu_data <= {{15{sign_bit_sra}}, i_op_a[31:15]};
                    16: o_alu_data <= {{16{sign_bit_sra}}, i_op_a[31:16]};
                    17: o_alu_data <= {{17{sign_bit_sra}}, i_op_a[31:17]};
                    18: o_alu_data <= {{18{sign_bit_sra}}, i_op_a[31:18]};
                    19: o_alu_data <= {{19{sign_bit_sra}}, i_op_a[31:19]};
                    20: o_alu_data <= {{20{sign_bit_sra}}, i_op_a[31:20]};
                    21: o_alu_data <= {{21{sign_bit_sra}}, i_op_a[31:21]};
                    22: o_alu_data <= {{22{sign_bit_sra}}, i_op_a[31:22]};
                    23: o_alu_data <= {{23{sign_bit_sra}}, i_op_a[31:23]};
                    24: o_alu_data <= {{24{sign_bit_sra}}, i_op_a[31:24]};
                    25: o_alu_data <= {{25{sign_bit_sra}}, i_op_a[31:25]};
                    26: o_alu_data <= {{26{sign_bit_sra}}, i_op_a[31:26]};
                    27: o_alu_data <= {{27{sign_bit_sra}}, i_op_a[31:27]};
                    28: o_alu_data <= {{28{sign_bit_sra}}, i_op_a[31:28]};
                    29: o_alu_data <= {{29{sign_bit_sra}}, i_op_a[31:29]};
                    30: o_alu_data <= {{30{sign_bit_sra}}, i_op_a[31:30]};
                    31: o_alu_data <= {{31{sign_bit_sra}}, i_op_a[31:31]};
                    default: o_alu_data <= i_op_a[31:0];
                endcase
            end

            SLTU[2:0]:  o_alu_data <= {31'd0, A_lt_B};
            SLT[2:0]: o_alu_data <= {31'd0, (A_lt_B ^ (~i_op_a[31] & i_op_b[31]) ^ (i_op_a[31] & ~i_op_b[31]))};
            default: ;
        endcase
        
    end
    
endmodule
