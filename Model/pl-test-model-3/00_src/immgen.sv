/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

module immgen (
	      input wire[31:7] i_instr,
          input wire[2:0] i_imm_sel, // bit 1: 0 for S type, 1 for B type, // bit 0: 0 for I-J type 1 for S type
          output reg[31:0] o_imm
);
    localparam S_type = 3'b000;
    localparam B_type = 3'b001;
    localparam I_type = 3'b011;
    localparam J_type = 3'b010;
    localparam U_type = 3'b110;
    always @(*) begin
        case (i_imm_sel)
            S_type: o_imm = {{20{i_instr[31]}}, i_instr[31:25], i_instr[11:7]};
            I_type: o_imm = {{20{i_instr[31]}}, i_instr[31:20]};
            B_type: o_imm = {{20{i_instr[31]}}, i_instr[7], i_instr[30:25], i_instr[11:8], 1'b0};
            U_type: o_imm = {i_instr[31:12], 12'd0};
            J_type: o_imm = {{12{i_instr[31]}}, i_instr[19:12], i_instr[20], i_instr[30:25], i_instr[24:21], 1'b0};
            default: ;
        endcase
    end

endmodule
