module hazard_detection (
    input  wire        i_clk,
    input  wire        i_reset,
    // From ID Stage
    input  wire [4:0]  id_rs1_addr,        // RS1 register in ID stage
    input  wire [4:0]  id_rs2_addr,        // RS2 register in ID stage
    // From EX Stage
    input  wire [4:0]  ex_rd_addr,         // Destination register in EX stage
    input  wire        ex_is_load,   // Load instruction in EX stage
    input  wire        ex_branch,     // Branch instruction in EX stage

    // From MEM Stage
    input  wire [4:0]  mem_rd_addr,
    input  wire        mem_is_load,
    input  wire        mem_branch_taken,  // Branch resolved in MEM stage

    // From WB Stage
    input  wire [4:0]  wb_rd_addr,
    input  wire        wb_is_load,

    input  wire        id_I_type,

    // Control Signals
    output reg        pc_stall,      // Stall PC update
    output reg        if_id_stall,   // Stall IF/ID register
    output reg        id_ex_stall,   // Stall ID/EX register

    output reg        if_id_flush,   // Flush IF/ID register
    output reg        id_ex_flush,   // Flush ID/EX register
    output reg        ex_mem_flush   // Flush EX/MEM register
);

    wire data_hazard;
    // Load-use hazard detection
    wire load_use_hazard;
    assign load_use_hazard = ex_is_load && ((id_rs1_addr == ex_rd_addr) || (~id_I_type && (id_rs2_addr == ex_rd_addr))) &&
                            (ex_rd_addr != 5'b0); // x0 can't cause hazards

    wire mem_data_hazard;
    assign mem_data_hazard = mem_is_load && ((id_rs1_addr == mem_rd_addr) || (~id_I_type && (id_rs2_addr == mem_rd_addr))) &&
                            (mem_rd_addr != 5'b0); // x0 can't cause hazards

    wire wb_data_hazard;
    assign wb_data_hazard = wb_is_load && ((id_rs1_addr == wb_rd_addr) || (~id_I_type && (id_rs2_addr == wb_rd_addr))) &&
                            (wb_rd_addr != 5'b0); // x0 can't cause hazards

    assign data_hazard = (load_use_hazard || mem_data_hazard || wb_data_hazard);

    // Branch hazard (control hazard)
    wire branch_hazard;
    // assign branch_hazard = ex_branch || mem_branch_taken;
    assign branch_hazard = ex_branch;

    // Stall signals
    assign pc_stall    = data_hazard;
    assign if_id_stall = data_hazard;
    assign id_ex_stall = 0;

    // Flush signals
    assign id_ex_flush = data_hazard | branch_hazard;
    assign if_id_flush = branch_hazard;
    assign ex_mem_flush = 0;


endmodule
