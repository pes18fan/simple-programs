; Add ten numbers stored in consecutive memory locations starting at 0x4080
; Store the 16-bit addition result at the end of the table

lxi h, 0x4080
lxi d, 0x0000
mvi b, 0x0a

loop:
    mov a, e
    add m
    mov e, a
    jc carryadd
    jmp loopctl

carryadd:
    inr d

loopctl:
    inx h
    dcr b
    jnz loop

storeres:
    mov m, e
    inx h
    mov m, d
    hlt
