; Transfer 10 8-bit numbers between memory addresses
; From addresses starting from 3000h, to the addresses starting from 4000h

jmp start

start: 
    lxi b, 0x3000
    lxi d, 0x4000
    mvi h, 0x0A

datamove:
    ldax b
    stax d
    inr c
    inr e
    dcr h
    jnz datamove
    hlt
