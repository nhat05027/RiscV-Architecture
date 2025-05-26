/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

module branch_predictor_2bit #(
    parameter NUM_ENTRIES = 1024,  // Number of prediction entries
    parameter PC_WIDTH = 32        // Program counter width
) (
    input wire clk,
    input wire reset,
    // Prediction interface
    input wire [PC_WIDTH-1:0] pc,
    input wire [PC_WIDTH-1:0] ex_pc,
    output reg predict_taken,
    // Update interface
    input wire update_en,
    input wire actual_taken
);

// 2-bit saturating counters
reg [1:0] counter [0:NUM_ENTRIES-1];
initial counter = '{default: 2'b01};

// Index calculation (use lower bits of PC)
localparam INDEX_BITS = $clog2(NUM_ENTRIES);
wire [INDEX_BITS-1:0] index = pc[INDEX_BITS+1:2];  // Word-aligned address
wire [INDEX_BITS-1:0] ex_index = ex_pc[INDEX_BITS+1:2];

// Prediction logic
always @(*) begin
    predict_taken = counter[index][1];  // Predict taken if MSB is 1
end

// Update logic
always @(posedge clk or posedge reset) begin
    if (reset) begin
        // Initialize all counters to weakly taken (01)
        counter <= '{default: 2'b01};
    end
    else if (update_en) begin
        // Update saturating counter
        case (counter[ex_index])
            2'b00: counter[ex_index] <= actual_taken ? 2'b01 : 2'b00;
            2'b01: counter[ex_index] <= actual_taken ? 2'b10 : 2'b00;
            2'b10: counter[ex_index] <= actual_taken ? 2'b11 : 2'b01;
            2'b11: counter[ex_index] <= actual_taken ? 2'b11 : 2'b10;
        endcase
    end
end

endmodule

