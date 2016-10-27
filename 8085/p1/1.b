IN 00
MOV B, A
IN 01
CMP B
JC stage3
MOV B,A
stage3:IN 02
CMP B
JC stage4
MOV B,A
stage4:IN 04
CMP B
JC swap
JMP end
swap:MOV A,B
end:OUT 03
HLT
