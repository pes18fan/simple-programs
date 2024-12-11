; There are 10 bytes at memory starting at C050h
; Move them to memory starting at D050h

lxi h, C050h        ; source
lxi d, D050h        ; destination
mvi c, 0Ah          ; counter

loop:
    mov a, m        ; a <- [hl]
    stax d          ; [de] <- a

loopctl:
    inx h
    inx d
    dcr c
    jnz loop
    hlt
