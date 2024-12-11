; Transfer 10 bits of data starting at 0x5050 to memory starting at 0x5060
; But only do so if the value is between 0x30 and 0x70
; Otherwise store 0x00 in the next table

lxi d, 0x5060   ; destination
lxi h, 0x5050   ; source
mvi b, 0x0a     ; counter

loop:
    mov a, m
    cpi 0x31
    jnc nextcmp

setz:
    mvi a, 0x00
    jmp store

nextcmp:
    cpi 0x70
    jc store
    jmp setz

store:
    stax d

loopctl:
    inx d
    inx h
    dcr b
    jnz loop
    hlt
