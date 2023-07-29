program string
    character(LEN=20) name
    
    write(*,*) 'Enter your name: '
    read(*,*) name
    write(*, *) 'Hello ', name, '!'
end program string
