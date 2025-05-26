/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

`define ROMFILE "rom.mem"
module control_unit (
    input wire i_clk,
    input wire i_reset,
    input wire[31:0] i_instr,
    output wire o_pc_sel,
    output wire [2:0] o_imm_sel,
    output wire o_rd_wren,
    output wire o_insn_vld,
    output wire o_br_un,
    output wire o_opa_sel,
    output wire o_opb_sel,
    output wire[3:0] o_alu_op,
    output wire o_mem_wren,
    output wire[1:0] o_wb_sel,
    output wire [1:0] o_lsu_op, // 0x: word handle, 10: Half word, 11: byte
    output wire o_ld_un // 0: for signed, 1: for unsigned
);
    reg [18:0] crom [511:0];
    initial begin
        $readmemb(`ROMFILE, crom);
    end

    reg[8:0] romAddr;

    always @(*) begin
        if (i_reset) romAddr <= 9'd0;
        else romAddr <= {i_instr[30], i_instr[14:12], i_instr[6:2]};
    end

    assign o_pc_sel = crom[romAddr][18];
    assign o_imm_sel = crom[romAddr][17:15];
    assign o_rd_wren = crom[romAddr][14];
    assign o_insn_vld = crom[romAddr][13];
    assign o_br_un = crom[romAddr][12];
    assign o_opa_sel = crom[romAddr][11];
    assign o_opb_sel = crom[romAddr][10];
    assign o_alu_op = crom[romAddr][9:6];
    assign o_mem_wren = crom[romAddr][5];
    assign o_wb_sel = crom[romAddr][4:3];
    assign o_lsu_op = crom[romAddr][2:1];
    assign o_ld_un = crom[romAddr][0];

endmodule
