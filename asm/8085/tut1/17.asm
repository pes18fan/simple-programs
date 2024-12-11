; Swap bit D1 and D5 of sixteen numbers stored in memory from 9650h
; But ONLY IF number is greater than 29h and less than D9h
; Else set D1 and reset D5

lxi h, 9650h        ; source
mvi c, 10h          ; counter

loop:
    mov a, m        ; a <- [hl]
    cpi 2Ah         ; a - 2A
    jc setreset     ; condition failed
    cpi D9h         ; a - D9
    jnc setreset    ; condition failed

swap:
    ani 22h         ; a <- a & 22
    cpi 00h         ; a - 00
    jz loopctl      ; if a == 00, D5 and D1 are both zero, no need to swap
    cpi 22h         ; a - 00
    jz loopctl      ; if a == 22, D5 and D1 are both set, no need to swap
    mov a, m        ; a <- [hl]
    xri 22h         ; a <- a xor 22, toggle bits D5 and D1
    mov m, a        ; [hl] <- a
    jmp loopctl
    
setreset:
    ori 02h         ; a <- a | 02
    ani DFh         ; a <- a & DF
    mov m, a        ; [hl] <- a
    
loopctl:
    inx h
    dcr c
    jnz loop
    hlt
