## Generated SDC file "singlecycle.out.sdc"

## Copyright (C) 1991-2013 Altera Corporation
## Your use of Altera Corporation's design tools, logic functions 
## and other software and tools, and its AMPP partner logic 
## functions, and any output files from any of the foregoing 
## (including device programming or simulation files), and any 
## associated documentation or information are expressly subject 
## to the terms and conditions of the Altera Program License 
## Subscription Agreement, Altera MegaCore Function License 
## Agreement, or other applicable license agreement, including, 
## without limitation, that your use is for the sole purpose of 
## programming logic devices manufactured by Altera and sold by 
## Altera or its authorized distributors.  Please refer to the 
## applicable agreement for further details.


## VENDOR  "Altera"
## PROGRAM "Quartus II"
## VERSION "Version 13.0.1 Build 232 06/12/2013 Service Pack 1 SJ Web Edition"

## DATE    "Fri Apr 11 15:26:17 2025"

##
## DEVICE  "EP2C35F672C6"
##


#**************************************************************
# Time Information
#**************************************************************

set_time_format -unit ns -decimal_places 3



#**************************************************************
# Create Clock
#**************************************************************

create_clock -name {i_clk} -period 20.000 -waveform { 0.000 10.000 } [get_ports {get_port i_clk}]


#**************************************************************
# Create Generated Clock
#**************************************************************



#**************************************************************
# Set Clock Latency
#**************************************************************



#**************************************************************
# Set Clock Uncertainty
#**************************************************************



#**************************************************************
# Set Input Delay
#**************************************************************

set_input_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {i_reset}]


#**************************************************************
# Set Output Delay
#**************************************************************

set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_insn_vld}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex0[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex0[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex0[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex0[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex0[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex0[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex0[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex1[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex1[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex1[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex1[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex1[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex1[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex1[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex2[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex2[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex2[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex2[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex2[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex2[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex2[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex3[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex3[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex3[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex3[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex3[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex3[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex3[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex4[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex4[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex4[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex4[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex4[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex4[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex4[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex5[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex5[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex5[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex5[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex5[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex5[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex5[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex6[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex6[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex6[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex6[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex6[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex6[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex6[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex7[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex7[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex7[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex7[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex7[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex7[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_hex7[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[7]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[8]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[9]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[10]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[11]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[12]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[13]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[14]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[15]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[16]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[17]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[18]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[19]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[20]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[21]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[22]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[23]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[24]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[25]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[26]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[27]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[28]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[29]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[30]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_lcd[31]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[7]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[8]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[9]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[10]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[11]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[12]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[13]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[14]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[15]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[16]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[17]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[18]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[19]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[20]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[21]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[22]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[23]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[24]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[25]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[26]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[27]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[28]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[29]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[30]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledg[31]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[7]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[8]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[9]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[10]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[11]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[12]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[13]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[14]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[15]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[16]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[17]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[18]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[19]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[20]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[21]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[22]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[23]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[24]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[25]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[26]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[27]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[28]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[29]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[30]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_io_ledr[31]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[0]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[1]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[2]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[3]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[4]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[5]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[6]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[7]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[8]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[9]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[10]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[11]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[12]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[13]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[14]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[15]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[16]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[17]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[18]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[19]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[20]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[21]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[22]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[23]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[24]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[25]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[26]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[27]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[28]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[29]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[30]}]
set_output_delay -add_delay  -clock [get_clocks {i_clk}]  1.000 [get_ports {o_pc_debug[31]}]


#**************************************************************
# Set Clock Groups
#**************************************************************



#**************************************************************
# Set False Path
#**************************************************************



#**************************************************************
# Set Multicycle Path
#**************************************************************



#**************************************************************
# Set Maximum Delay
#**************************************************************



#**************************************************************
# Set Minimum Delay
#**************************************************************



#**************************************************************
# Set Input Transition
#**************************************************************

