module hazard_detection (
    input  wire        i_clk,
    input  wire        i_reset,

    // // From EX Stage
    input  wire [4:0]  ex_rs1_addr,        // RS1 register in ID stage
    input  wire [4:0]  ex_rs2_addr,        // RS2 register in ID stage
    // From EX Stage
    input  wire        ex_branch,     // Branch instruction in EX stage

    // From MEM Stage
    input  wire [4:0]  mem_rd_addr,
    input  wire        mem_is_load,
    input  wire        mem_rd_wren,


    // Control Signals
    output reg        pc_stall,      // Stall PC update
    output reg        if_id_stall,   // Stall IF/ID register
    output reg        id_ex_stall,   // Stall ID/EX register

    output reg        if_id_flush,   // Flush IF/ID register
    output reg        id_ex_flush,   // Flush ID/EX register
    output reg        ex_mem_flush   // Flush EX/MEM register
);

    // Load-use hazard detection
    wire load_use_hazard;
    assign load_use_hazard = (mem_rd_wren && mem_is_load && ((ex_rs1_addr == mem_rd_addr) || ((ex_rs2_addr == mem_rd_addr))) &&
                            (mem_rd_addr != 5'b0)); // x0 can't cause hazards


    // Branch hazard (control hazard)
    wire branch_hazard;
    // assign branch_hazard = ex_branch || mem_branch_taken;
    assign branch_hazard = ex_branch & ~load_use_hazard;

    // Stall signals
    assign pc_stall    = load_use_hazard;
    assign if_id_stall = load_use_hazard;
    assign id_ex_stall = load_use_hazard;

    // Flush signals
    assign id_ex_flush = branch_hazard;
    assign if_id_flush = branch_hazard;
    assign ex_mem_flush = load_use_hazard;


endmodule
