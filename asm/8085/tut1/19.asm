; Ten numbers are stored from address 7600h
; Swap the bit D5 of any number which is greater than or equals 80h

lxi h, 7600h        ; source
mvi c, 0Ah          ; counter

loop:
    mov a, m        ; a <- m
    cpi 80h         ; a - 80
    jc loopctl      ; condition failed
    xri 20h         ; a <- a xor 20
    mov m, a

loopctl:
    inx h
    dcr c
    jnz loop
    hlt
