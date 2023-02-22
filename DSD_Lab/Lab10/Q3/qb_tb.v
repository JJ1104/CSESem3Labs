`timescale 1ns/1ns
`include "qb.v" 
module qb_tb();
reg j, k, clock, resetn; 
wire q;
JKFF j1(j, k , clock, resetn, q);
initial
begin
	$dumpfile("qb_tb.vcd");
	$dumpvars(0, qb_tb);
	clock=0;
	forever #20 clock = ~clock;
end
initial begin
	j=0; k=0; resetn=0;
	#20;
	j=0; k=1; resetn=1;
	#20;
	j=1; k=0; resetn=0;
	#20;
	j=1; k=1; resetn=0;
	#20;
	j=1; k=0; resetn=1;
	#20;
	$display("Test complete");
end
endmodule
