program ari_if
    integer n

    print *, 'Enter -1, 0 or 1'
    read(*, *)n

    if (n) 1, 2, 3

1   print *, 'negative'
    stop
2   print *, 'zero'
    stop
3   print *, 'positive'
end program ari_if
