;Puertas de entrada:00,01,02,04
;Puertas de salida: 03 (numero mayor), 05 (numero menor)
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

IN 00
MOV B, A
IN 01
CMP B
JNC less3
MOV B,A
less3:IN 02
CMP B
JNC less4
MOV B,A
less4:IN 04
CMP B
JNC lessswap
JMP lesserend
lessswap:MOV A,B
lesserend:OUT 05
HLT
