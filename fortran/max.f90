program max
    integer a, b

    write(*, *) 'Enter a and b'
    read(*, *) a, b

    if (a .gt. b) then
        write(*, *) 'maximum: ', a
    else
        write(*, *) 'maximum: ', b
    end if
end program max
