program computed
    integer label

    print *, 'Enter 1 for label 1, 2 for label 2 and 3 for label 3'
    read(*, *)label

    goto (1, 2, 3) label

1   print *, 'Label 1'
    stop
2   print *, 'Label 2'
    stop
3   print *, 'Label 3'
end program computed
