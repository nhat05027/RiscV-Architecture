module branch_control (
    input wire clk,
    input wire reset,

    input wire [31:0] i_instr,
    input wire [31:0] pc,

    output reg [31:0] branch_pc,
    output reg branch_taken

);

    initial branch_taken = 0;

    always @(*) begin
        if (i_instr[6:2] == 5'b11011) begin
            branch_taken = 1;
            branch_pc = pc + {{12{i_instr[31]}}, i_instr[19:12], i_instr[20], i_instr[30:25], i_instr[24:21], 1'b0};
        end
        else if (i_instr[6:2] == 5'b11000) begin // always taken
            branch_taken = 1;
            branch_pc = pc + {{20{i_instr[31]}}, i_instr[7], i_instr[30:25], i_instr[11:8], 1'b0};
        end
        else begin 
            branch_taken = 0;
            branch_pc = 0;
        end
    end
    
endmodule
