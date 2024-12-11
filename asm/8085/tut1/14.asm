; Six bytes are in memory locations from 2050h
; Add all of them, save any generated carry while doing so
; Show entire sum at two output ports
; Store total carry in 2070h, sum in 2071h

lxi h, 2050h        ; source
mvi d, 00h          ; sum
mvi e, 00h          ; carry
mvi c, 06h          ; counter

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
    sta 2071h       ; store sum
    mov a, e        ; a <- e
    out 02h         ; show carry
    sta 2070h       ; store carry
