; 10 bytes are stored from 3030h
; Sum the higher and lower nibble of each byte
; Store the sums starting from 4040h

lxi h, 3030h        ; source
lxi d, 4040h        ; destination
mvi c, 0Ah          ; counter

loop:
    mov a, m        ; a <- [hl]
    ani 0Fh         ; a <- a & 0F, remove the upper nibble
    mov b, a        ; b <- a, store lower nibble in b
    mov a, m        ; a <- [hl]
    ani F0h         ; a <- a | F0, remove the lower nibble
    rrc             ; repeat four times to move upper nibble low
    rrc
    rrc
    rrc
    add b           ; a <- a + b, add the two nibbles
    stax d          ; [de] <- a

loopctl:
    inx h
    inx d
    dcr c
    jnz loop
    hlt
