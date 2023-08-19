program print_even
    do i = 1, 10
        if (mod(i, 2) .eq. 0) then
            print *, i
        end if
    end do
end program print_even
