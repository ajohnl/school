MVI E,00
MVI B,01
MVI D,01
MVI C,00
LDAX B
MOV H,A
MVI B,01
MVI C,01
LDAX B
MOV L,A
MOV B,H
MVI C,00
restart:MOV A,E
ADD D
CMP L
JZ done
MOV E,A
MOV A,H
ADD B
MOV H,A
JC carry
JMP restart


done:MOV A, H
OUT 03
MOV A,C
OUT 02
HLT

carry:MOV A,C
ADD D
MOV C,A
JMP restart