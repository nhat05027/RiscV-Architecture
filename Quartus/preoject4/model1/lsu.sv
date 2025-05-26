/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off LATCH */
/* verilator lint_off COMBDLY */
/* verilator lint_off SYNCASYNCNET */
/* verilator lint_off MULTIDRIVEN */

`define MEMFILE "hex2bcd.mem"
`define MEMSIZE 16384
`define ADDRBIT 14

module lsu (
    input wire i_clk,          // Global clock
    input wire i_reset,        // Global active reset
    input wire [31:0] i_lsu_addr, // Address for data read/write
    input wire [31:0] i_st_data,  // Data to be stored
    input wire i_lsu_wren,     // Write enable signal (1 if writing)
    output reg [31:0] o_ld_data, // Data read from memory
    output wire [31:0] o_io_ledr, // Output for red LEDs
    output wire [31:0] o_io_ledg, // Output for green LEDs
    output wire [6:0] o_io_hex0,  // Output for 7-segment display 0
    output wire [6:0] o_io_hex1,  // Output for 7-segment display 1
    output wire [6:0] o_io_hex2,  // Output for 7-segment display 2
    output wire [6:0] o_io_hex3,  // Output for 7-segment display 3
    output wire [6:0] o_io_hex4,  // Output for 7-segment display 4
    output wire [6:0] o_io_hex5,  // Output for 7-segment display 5
    output wire [6:0] o_io_hex6,  // Output for 7-segment display 6
    output wire [6:0] o_io_hex7,  // Output for 7-segment display 7
    output wire [31:0] o_io_lcd,  // Output for LCD register
    input wire [31:0] i_io_sw,    // Input for switches
    input wire [1:0] i_lsu_op, // 0x: word handle, 10: Half word, 11: byte
    input wire i_ld_un, // 0: for signed, 1: for unsigned

    input wire[31:0] i_pc,
    output reg[31:0] o_instr
);


    // Map 0000 - 7FFF Flash
    // Map 8000 - FFFF Sram
    reg[`ADDRBIT-3:0] bram_mem_addr, bram_pc_addr;
    assign bram_pc_addr = {i_pc[`ADDRBIT-1:2]};
    assign bram_mem_addr = {i_lsu_addr[`ADDRBIT-1:2]};
    reg[31:0] i_mem_data;
    wire[31:0] o_mem_data;
    wire i_mem_wren;
    assign i_mem_wren = (i_lsu_addr[31:16]==16'h0000)&i_lsu_wren;
    bram #(
        .MEMSIZE(`MEMSIZE),
        .ADDRBIT(`ADDRBIT)
    ) bramm(
        .i_clk(i_clk),
        .i_reset(i_reset),

        .i_p1_addr(bram_pc_addr),
        .i_p2_addr(bram_mem_addr),
        .o_p2_data(o_mem_data),
        .o_p1_data(o_instr),

        .i_p2_data(i_mem_data),
        .i_p2_wren(i_mem_wren)
    );

    reg [31:0] sw_buffer;
    reg [31:0] io_buffer[15:0];

    initial begin
        io_buffer = '{default:'0};
    end
          
    

    /// io
    assign o_io_ledr = io_buffer[0];
    assign o_io_ledg = io_buffer[1];

    assign o_io_hex0 = io_buffer[2][6:0];
    assign o_io_hex1 = io_buffer[2][14:8];
    assign o_io_hex2 = io_buffer[2][22:16];
    assign o_io_hex3 = io_buffer[2][30:24];

    assign o_io_hex4 = io_buffer[3][6:0];
    assign o_io_hex5 = io_buffer[3][14:8];
    assign o_io_hex6 = io_buffer[3][22:16];
    assign o_io_hex7 = io_buffer[3][30:24];

    assign o_io_lcd = io_buffer[4];
    
    assign sw_buffer = i_io_sw;


    // LSU logic
    always @(posedge i_clk or posedge i_reset) begin
        if (i_reset) begin
            // Reset outputs
            o_ld_data <= 32'b0;
        end 
        else begin
            if (i_lsu_wren) begin
            // Memory-mapped I/O handling
                case (i_lsu_addr[31:16])
                    16'h1000: begin
                        if (!i_lsu_op[1]) io_buffer[i_lsu_addr[15:12]] <= i_st_data;

                        else if (i_lsu_op[1] & ~i_lsu_op[0]) begin
                            if (!i_lsu_addr[1]) io_buffer[i_lsu_addr[15:12]][15:0] <= i_st_data[15:0];
                            else io_buffer[i_lsu_addr[15:12]][31:16] <= i_st_data[15:0];
                        end

                        else if (i_lsu_op[1] & i_lsu_op[0]) begin
                            case (i_lsu_addr[1:0])
                                2'b00: io_buffer[i_lsu_addr[15:12]][7:0] <= i_st_data[7:0];
                                2'b01: io_buffer[i_lsu_addr[15:12]][15:8] <= i_st_data[7:0];
                                2'b10: io_buffer[i_lsu_addr[15:12]][23:16] <= i_st_data[7:0];
                                2'b11: io_buffer[i_lsu_addr[15:12]][31:24] <= i_st_data[7:0];
                            endcase
                        end
                    end

                    // 16'h0000: i_mem_wren <= 1;

                    // Reserved
                    default:;
                endcase
            end
            else begin
                case (i_lsu_addr[31:16])
                    16'h1000: begin
                        if (!i_lsu_op[1]) begin 
                            o_ld_data <= io_buffer[i_lsu_addr[15:12]];
                        end
                        else if (i_lsu_op[1] & ~i_lsu_op[0]) begin
                            if (!i_lsu_addr[1]) begin
                                o_ld_data[15:0] <= io_buffer[i_lsu_addr[15:12]][15:0];
                                o_ld_data[31:16] <= {16{io_buffer[i_lsu_addr[15:12]][15] & ~i_ld_un}};
                            end
                            else begin
                                o_ld_data[15:0] <= io_buffer[i_lsu_addr[15:12]][31:16];
                                o_ld_data[31:16] <= {16{io_buffer[i_lsu_addr[15:12]][31] & ~i_ld_un}};
                            end
                        end
                        else if (i_lsu_op[1] & i_lsu_op[0]) begin
                            case (i_lsu_addr[1:0])
                                2'b00: begin
                                    o_ld_data[7:0] <= io_buffer[i_lsu_addr[15:12]][7:0];
                                    o_ld_data[31:8] <= {24{io_buffer[i_lsu_addr[15:12]][7] & ~i_ld_un}};
                                end
                                2'b01: begin
                                    o_ld_data[7:0] <= io_buffer[i_lsu_addr[15:12]][15:8];
                                    o_ld_data[31:8] <= {24{io_buffer[i_lsu_addr[15:12]][15] & ~i_ld_un}};
                                end
                                2'b10: begin
                                    o_ld_data[7:0] <= io_buffer[i_lsu_addr[15:12]][23:16];
                                    o_ld_data[31:8] <= {24{io_buffer[i_lsu_addr[15:12]][23] & ~i_ld_un}};
                                end
                                2'b11: begin
                                    o_ld_data[7:0] <= io_buffer[i_lsu_addr[15:12]][31:24];
                                    o_ld_data[31:8] <= {24{io_buffer[i_lsu_addr[15:12]][31] & ~i_ld_un}};
                                end
                            endcase
                        end
                    end
                    
                    // Switches
                    16'h1001: begin
                        if (!i_lsu_op[1]) begin 
                            o_ld_data <= sw_buffer;
                        end
                        else if (i_lsu_op[1] & ~i_lsu_op[0]) begin
                            if (!i_lsu_addr[1]) begin
                                o_ld_data[15:0] <= sw_buffer[15:0];
                                o_ld_data[31:16] <= {16{sw_buffer[15] & ~i_ld_un}};
                            end
                            else begin
                                o_ld_data[15:0] <= sw_buffer[31:16];
                                o_ld_data[31:16] <= {16{sw_buffer[31] & ~i_ld_un}};
                            end
                        end
                        else if (i_lsu_op[1] & i_lsu_op[0]) begin
                            case (i_lsu_addr[1:0])
                                2'b00: begin
                                    o_ld_data[7:0] <= sw_buffer[7:0];
                                    o_ld_data[31:8] <= {24{sw_buffer[7] & ~i_ld_un}};
                                end
                                2'b01: begin
                                    o_ld_data[7:0] <= sw_buffer[15:8];
                                    o_ld_data[31:8] <= {24{sw_buffer[15] & ~i_ld_un}};
                                end
                                2'b10: begin
                                    o_ld_data[7:0] <= sw_buffer[23:16];
                                    o_ld_data[31:8] <= {24{sw_buffer[23] & ~i_ld_un}};
                                end
                                2'b11: begin
                                    o_ld_data[7:0] <= sw_buffer[31:24];
                                    o_ld_data[31:8] <= {24{sw_buffer[31] & ~i_ld_un}};
                                end
                            endcase
                        end
                    end

                    // Memory access
                    16'h0000: begin
                        if (!i_lsu_op[1]) begin
                            o_ld_data <= o_mem_data;
                        end
                        else if (i_lsu_op[1] & ~i_lsu_op[0]) begin
                            if (!i_lsu_addr[1]) begin
                                o_ld_data[15:0] <= o_mem_data[15:0];
                                o_ld_data[31:16] <= {16{o_mem_data[15] & ~i_ld_un}};
                            end
                            else begin
                                o_ld_data[15:0] <= o_mem_data[31:16];
                                o_ld_data[31:16] <= {16{o_mem_data[31] & ~i_ld_un}};
                            end
                        end
                        else begin
                            case (i_lsu_addr[1:0])
                                2'b00: begin
                                    o_ld_data[7:0] <= o_mem_data[7:0];
                                    o_ld_data[31:8] <= {24{o_mem_data[7] & ~i_ld_un}};
                                end
                                2'b01: begin
                                    o_ld_data[7:0] <= o_mem_data[15:8];
                                    o_ld_data[31:8] <= {24{o_mem_data[15] & ~i_ld_un}};
                                end
                                2'b10: begin
                                    o_ld_data[7:0] <= o_mem_data[23:16];
                                    o_ld_data[31:8] <= {24{o_mem_data[23] & ~i_ld_un}};
                                end
                                2'b11: begin
                                    o_ld_data[7:0] <= o_mem_data[31:24];
                                    o_ld_data[31:8] <= {24{o_mem_data[31] & ~i_ld_un}};
                                end
                            endcase
                            
                        end
                    end
                    
                    // Reserved
                    default: ;
                endcase
            end
        end
    end

    always @(*) begin
        if (!i_lsu_op[1]) begin
            i_mem_data <= i_st_data;
        end
        else if (i_lsu_op[1] & ~i_lsu_op[0]) begin
            if (!i_lsu_addr[1]) begin 
                i_mem_data[15:0] <= i_st_data[15:0];
                i_mem_data[31:16] <= o_mem_data[31:16];
            end
            else begin
                i_mem_data[15:0] <= o_mem_data[15:0];
                i_mem_data[31:16] <= i_st_data[15:0];
            end
        end
        else if (i_lsu_op[1] & i_lsu_op[0]) begin
            case (i_lsu_addr[1:0])
                2'b00: begin
                    i_mem_data[7:0] <= i_st_data[7:0];
                    i_mem_data[31:8] <= o_mem_data[31:8];
                end
                2'b01: begin
                    i_mem_data[7:0] <= o_mem_data[7:0];
                    i_mem_data[15:8] <= i_st_data[7:0];
                    i_mem_data[31:16] <= o_mem_data[31:16];
                end
                2'b10: begin
                    i_mem_data[15:0] <= o_mem_data[15:0];
                    i_mem_data[23:16] <= i_st_data[7:0];
                    i_mem_data[31:24] <= o_mem_data[31:24];
                end
                2'b11: begin
                    i_mem_data[23:0] <= o_mem_data[23:0];
                    i_mem_data[31:24] <= i_st_data[7:0];
                end
            endcase
        end
        
    end

endmodule
    