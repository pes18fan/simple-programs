program oddeven
    integer n, o

    write(*, *)'Enter a number'
    read(*, *)n
    
    o = mod(n, 2)

    if (o .eq. 0) then
        write(*, *)'Even'
    else
        write(*, *)'Odd'
    end if
end program oddeven
