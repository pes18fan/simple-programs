; Swap higher and lower nibble of number stored at E050h

lda E050h      ; a <- [E050]
ani 0Fh         ; a <- a & 0F, separate lower nibble
rlc             ; repeat four times to make lower nibble higher
rlc
rlc
rlc
mov b, a        ; store lower nibble (now at higher position) at b
lda E050h      ; a <- [E050]
ani F0h         ; a <- a & F0, separate higher nibble
rrc             ; repeat four times to make higher nibble lower
rrc
rrc
rrc
ora b           ; a <- a | b, OR on the swapped nibbles to combine them
mov c, a        ; c <- a
