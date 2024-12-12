; Swap bit D3 and D6 of ten numbers in 9650h
; Only if the number is greater than 70h and lower than A0h
; Else set D3 and reset D6

lxi h, 9650h        ; hl <- 9650, source
mvi c, 0Ah          ; c <- 0A, counter

loop:
    mov a, m        ; a <- [hl]
    cpi 71h         ; a - 71h
    jc setunset     ; condition fail
    cpi A0h         ; a - A0h
    jnc setunset    ; condition fail

swap:
    ani 48h         ; a <- a & 48h, isolate D6 and D3
    cpi 00h         ; a - 00
    jz loopctl      ; if a == 00, D6 and D3 are both zero, no need to swap
    cpi 48h         ; a - 48
    jz loopctl      ; if a == 48, D6 and D3 are both set, no need to swap
    mov a, m        ; a <- [hl]
    xri 48h         ; a <- a xor 48, toggles the unequal D6 and D3
    mov m, a        ; [hl] <- a
    jmp loopctl

setunset:
    ori 08h         ; a <- a | 08
    ani BFh         ; a <- a & BF
    mov m, a        ; [hl] <- a

loopctl:
    inx h           ; hl <- hl + 1
    dcr c           ; c <- c - 1
    jnz loop
    hlt
