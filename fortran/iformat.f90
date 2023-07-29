program iformat
    integer a, b, c
    write(*, *) 'Enter number'
    read(*, 100) a, b, c
    write(*, 101) a, b, c
100 format(i3, i2, i5)
101 format(i3, i5, i5)
end program iformat
