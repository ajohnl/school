MVI A,80
MOV B,A
MVI A,01
OUT 00
MOV C,A
rlc:RLC
CMP B
OUT 00
JZ swap1
JMP rlc
swap1:MVI A,00
OUT 00
MVI A,80

rrc:out 01
rrc


CMP C
JZ swap2
JMP rrc

swap2:MVI A,00
OUT 01
MVI A,01

JMP rlc

