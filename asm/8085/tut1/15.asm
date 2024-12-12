; There is some data stored at location starting at 2050h
; End of data is indicated by a data byte 00h
; Add all the readings
; Display the sum at port 1 and carry at port 2

lxi h, 2050h        ; source
mvi d, 00h          ; sum
mvi e, 00h          ; carry

loop:
    mov a, m        ; a <- [hl]
    add d           ; a <- a + d
    mov d, a        ; d <- a
    jnc loopctl

addcarry:
    inr e

loopctl:
    inx h
    mvi a, 00h      ; a <- 00
    cmp m           ; a - [hl]
    jnz loop

last:
    mov a, d        ; a <- d
    out 01h         ; show sum
    mov a, e        ; a <- e
    out 02h         ; show carry
