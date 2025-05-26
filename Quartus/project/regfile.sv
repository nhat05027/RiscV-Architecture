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
    reg [4:0] rd_addr_buffer;
    reg [31:0] rd_data_buffer;

    genvar i;
    generate
        for (i = 0; i<32; i++) begin : loop
            initial begin
                regfile_mem[i] = 0;
            end    
        end
    endgenerate

    always @(posedge i_clk or posedge i_reset) begin
        if (i_reset) begin
        end
        else if (i_rd_wren && rd_addr_buffer != 5'd0) regfile_mem[rd_addr_buffer] <= rd_data_buffer;
    end

    always @(negedge i_clk) begin
        if (i_rd_wren) begin
            rd_addr_buffer <= i_rd_addr;
            rd_data_buffer <= i_rd_data;
        end
    end

    assign o_rs1_data = regfile_mem[i_rs1_addr];
    assign o_rs2_data = regfile_mem[i_rs2_addr];

endmodule
