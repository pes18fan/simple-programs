; Set the sign and carry flag and reset the carry flag
; Don't affect any other flags

jmp start

start: nop

lxi  sp, 0xffff    ; sp <- ffff
push psw           ; [fffe] <- a, [fffd] <- f
pop  d             ; e <- [fffd], d <- [fffe]
mov  a, e          ; a <- e
ori  0x81          ; a <- a | 81
ani  0xfb          ; a <- a & fb
mov  e, a          ; e <- a
push d             ; [fffe] <- d, [fffd] <- e
pop psw            ; a <- [fffe], f <- [fffd]

hlt
