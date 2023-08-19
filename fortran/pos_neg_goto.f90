program pos_neg
    integer n

    print *, 'Enter an integer'
    read(*, *)n

    if (n .gt. 0) then
        goto 10
    else
        goto 12
    end if

10  print *, 'Positive'
    stop
12  print *, 'Negative'
end program pos_neg
