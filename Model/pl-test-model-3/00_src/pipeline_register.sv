/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

module pipeline_register #(
    parameter DATA_WIDTH = 32,           // Width of the data bus
    parameter RESET_VALUE = 0            // Value to load on flush/reset
) (
    input  wire                     clk,       // Clock
    input  wire                     reset,     // Async reset
    input  wire                     flush,     // Flush signal (loads RESET_VALUE)
    input  wire                     stall,     // Stall signal (freezes output)
    input  wire [DATA_WIDTH-1:0]    data_in,   // Input data
    output reg  [DATA_WIDTH-1:0]    data_out   // Output data
);
initial data_out = RESET_VALUE;
always @(posedge clk or posedge reset) begin
    if (reset) begin
        data_out <= RESET_VALUE;
    end else begin
        if (flush) begin
            data_out <= RESET_VALUE;  // Flush overrides stall
        end else if (!stall) begin
            data_out <= data_in;      // Normal operation
        end
        // If stall=1, do nothing (retain current value)
    end
end

endmodule
