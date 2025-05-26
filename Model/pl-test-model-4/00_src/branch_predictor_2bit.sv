/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

module branch_predictor_2bit #(
    parameter PC_WIDTH = 32        // Program counter width
) (
    input wire clk,
    input wire reset,
    // Prediction interface
    input wire [PC_WIDTH-1:0] pc,
    output reg predict_taken,
    // Update interface
    input wire update_en,
    input wire actual_taken
);

// 2-bit saturating counters
reg [1:0] counter;
initial counter = 2'b01;


// Prediction logic
always @(*) begin
    predict_taken = counter[1];  // Predict taken if MSB is 1
end

// Update logic
always @(posedge clk or posedge reset) begin
    if (reset) begin
        // Initialize all counters to weakly taken (01)
        counter <= 2'b01;
    end
    else if (update_en) begin
        // Update saturating counter
        case (counter)
            2'b00: counter <= actual_taken ? 2'b01 : 2'b00;
            2'b01: counter <= actual_taken ? 2'b10 : 2'b00;
            2'b10: counter <= actual_taken ? 2'b11 : 2'b01;
            2'b11: counter <= actual_taken ? 2'b11 : 2'b10;
        endcase
    end
end

endmodule

