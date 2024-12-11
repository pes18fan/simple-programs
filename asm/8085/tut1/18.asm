; Ten bytes are stored from 2000h to 2009h
; Add them and store 16 bit result at end of table
; Also display results at output ports

lxi h, 2000h        ; source
mvi d, 00h          ; sum
mvi e, 00h          ; carry
mvi c, 0Ah          ; counter

loop:
    mov a, m        ; a <- [hl]
    add d           ; a <- a + d
    mov d, a        ; d <- a
    jnc loopctl

addcarry:
    inr e

loopctl:
    inx h
    dcr c
    jnz loop

last:
    mov a, d        ; a <- d
    out 01h         ; show sum
    mov m, a        ; store sum
    inx h
    mov a, e        ; a <- e
    out 02h         ; show carry
    mov m, a        ; store carry
