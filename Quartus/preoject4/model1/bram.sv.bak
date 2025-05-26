/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

`define MEMFILE "../sc-test/02_test/isa.mem"

module bram #(
    parameter MEMSIZE = 65536,
    parameter ADDRBIT = 16
    ) (
        input wire i_clk,
        input wire i_reset,
        input wire[ADDRBIT-3:0] i_p1_addr,
        input wire[ADDRBIT-3:0] i_p2_addr,

        output reg[31:0] o_p1_data,
        output reg[31:0] o_p2_data,

        input wire[31:0] i_p2_data,
        input wire i_p2_wren
    );
    
    reg [31:0] d_mem [MEMSIZE/4-1:0]; // 
    initial begin
        d_mem = '{default:'0};
        $readmemh(`MEMFILE, d_mem);
    end  
    
    initial begin
        o_p1_data = 0;
        o_p2_data = 0;
    end


    always @(posedge i_clk or posedge i_reset) begin
        if (i_reset) begin
        end
        else begin
            if (i_p2_wren) d_mem[i_p2_addr] <= i_p2_data;
        end
    end

    always @(*) begin
        o_p2_data <= d_mem[i_p2_addr];
        o_p1_data <= d_mem[i_p1_addr];
    end

endmodule

