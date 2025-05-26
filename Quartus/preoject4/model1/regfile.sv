/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

module regfile (
	      input wire i_clk,
	      input wire i_reset,
	      input wire[4:0] i_rs1_addr,
          input wire[4:0] i_rs2_addr,
          output reg[31:0] o_rs1_data,
          output reg[31:0] o_rs2_data,
	      input wire[4:0] i_rd_addr,
          input wire[31:0] i_rd_data,
	      input wire i_rd_wren
);
    reg [31:0] regfile_mem[31:0];
    
    genvar i;
    generate
        for (i = 0; i<32; i++) begin :loop
            initial begin
                regfile_mem[i] = 0;
            end    
        end
    endgenerate


    always @(posedge i_clk or posedge i_reset) begin
        if (i_reset) begin
        end
        else begin
            if (i_rd_wren) begin
                if (i_rd_wren && i_rd_addr != 5'd0) regfile_mem[i_rd_addr] <= i_rd_data;
            end   
        end
    end

    always @(*) begin
        o_rs1_data <= regfile_mem[i_rs1_addr];
        o_rs2_data <= regfile_mem[i_rs2_addr];
    end

endmodule
