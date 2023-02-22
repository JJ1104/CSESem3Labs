`timescale 1ns/1ns
`include "qb.v"
 
module qb_tb();
reg [4:0]a,b;
wire aebq,agtb,altb;

 
comp5bit c1(a,b,aeqb,agtb,altb);
initial
begin
$dumpfile("qb_tb.vcd");
$dumpvars(0,qb_tb);
 
a=5'b00000;b=5'b00001;#20;
a=5'b00001;b=5'b00001;#20;
 
$display("Test Complete ");
end
endmodule
