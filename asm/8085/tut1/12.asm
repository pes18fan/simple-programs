; Sixteen bytes are from 1050h to 105Fh
; Replace each byte by FF

lxi h, 1050h        ; hl <- 1050
mvi c, 10h          ; c <- 10

loop:
    mvi a, FFh      ; a <- FF
    mov m, a        ; [hl] <- a

loopctl:
    inx h
    dcr c
    jnz loop
    hlt
