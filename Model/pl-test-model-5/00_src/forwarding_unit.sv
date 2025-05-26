/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

module forwarding_unit(
    input  wire [4:0] ex_rs1_addr,
    input  wire [4:0] ex_rs2_addr,
    input  wire [4:0] mem_rd_addr,
    input  wire       mem_reg_write,
    input  wire [4:0] wb_rd_addr,
    input  wire       wb_reg_write,
    input  wire [4:0] temp_rd_addr,
    input  wire       temp_reg_write,
    output reg [1:0]  forward_a,
    output reg [1:0]  forward_b
);
    always @(*) begin
        // Forward A
        if (mem_reg_write && (mem_rd_addr != 0) && (mem_rd_addr == ex_rs1_addr)) 
            forward_a = 2'b10;
        else if (wb_reg_write && (wb_rd_addr != 0) && (wb_rd_addr == ex_rs1_addr))
            forward_a = 2'b01;
        else if (temp_reg_write && (temp_rd_addr != 0) && (temp_rd_addr == ex_rs1_addr))
            forward_a = 2'b11;
        else 
            forward_a = 2'b00;
        
        // Forward B
        if (mem_reg_write && (mem_rd_addr != 0) && (mem_rd_addr == ex_rs2_addr))
            forward_b = 2'b10;
        else if (wb_reg_write && (wb_rd_addr != 0) && (wb_rd_addr == ex_rs2_addr))
            forward_b = 2'b01;
        else if (temp_reg_write && (temp_rd_addr != 0) && (temp_rd_addr == ex_rs2_addr))
            forward_b = 2'b11;
        else 
            forward_b = 2'b00;
    end
endmodule
