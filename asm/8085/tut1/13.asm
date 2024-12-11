; Sixteen data are stored from 1050h to 105Fh
; Transfer entire block of data to new location starting at 1070h

lxi h, 1050h        ; source
lxi d, 1070h        ; destination
mvi c, 10h          ; counter

loop:
    mov a, m        ; a <- [hl]
    stax d          ; [de] <- a

loopctl:
    inx h
    inx d
    dcr c
    jnz loop
    hlt
