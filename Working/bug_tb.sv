
`timescale 1ns/10ps

module acq_ctrl_tb;

	localparam CLOCK_HALF_PERIOD = 5;
	localparam CLOCK_CYCLE = 10;

	logic 			rst;
	logic 			clk;

	logic 			varA;
	logic 			varB;
	logic 			varC;
	logic			varD;

	initial begin
		$dumpfile ("SimLog.vcd");
		$dumpvars;
	end

	// Clock generator
	always #CLOCK_HALF_PERIOD clk = ~clk;

	always begin

	rst = 1;
	clk = 0;

	varA = 0;
//	varC = 0;
	varB = 0;
	varD = 0;

	#CLOCK_CYCLE;
	rst = 0;
	varB = 1;

	$display("rst: %d, varB: %d", rst, varB);

	#CLOCK_CYCLE;

	$finish;
	end

endmodule
